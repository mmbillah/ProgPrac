#include <iostream>
#include <algorithm>

int main()
{
	int X[] = { 1, 2, 3 };
	int Y[] = { 4, 5, 6 };

	int m = sizeof(X)/sizeof(X[0]);
	int n = sizeof(Y)/sizeof(Y[0]);

	int arr[m + n];
	std::copy(X, X + m, arr);
	std::copy(Y, Y + n, arr + m);

	// or use 
	// std::copy(Y, Y + n, std::copy(X, X + m, arr));

	for (int i = 0; i < m + n; i++) {
		std::cout << arr[i] << ' ';
	}

	return 0;
}
