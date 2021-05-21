#include<iostream>
using namespace std;

int a[3]={10,20,30}, b[3], c[3];

int main(){

    for(int i=0;i<3;i++){
        b[i] = a[i] + 5;
        c[i] = a[i] + 15;
    }
/*
    for(int i=0;i<3;i++){
        cout<<b[i]<<" ";
    }

    for(int i=0;i<3;i++){
      cout<<c[i]<<" ";
   }
*/
    int m = sizeof(b)/sizeof(b[0]);
	int n = sizeof(c)/sizeof(c[0]);

	int arr[m + n];
	copy(b, b + m, arr);
	copy(c, c + n, arr + m);
    
    for (int i = 0; i < m + n; i++) {
		cout << arr[i] << endl;
	}
    
    double arrQ [m+n];
    for (int i = 0; i < m + n; i++){
        if (i < m)
            arrQ [i] = 1.0;
        else
            arrQ [i] = -1.0;
    }double arrQ [m+n];
 33     for (int i = 0; i < m + n; i++){
 34     ┆   if (i < m)
 35     ┆   ┆   arrQ [i] = 1.0;
 36     ┆   else
 37     ┆   ┆   arrQ [i] = -1.0;
 38     }
    
    for (int i = 0; i < m + n; i++) {
        cout << arrQ[i] << endl;
    }

    return 0;
}
