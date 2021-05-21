#include<iostream>
#include<math.h>

using namespace std;

double a[3] = {1,2,3}, b[3] = {4,5,6}, c[3] = {7,8,9}; //1D arrays
double a1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; //2D array
double a2[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; //1D array, equivalent to 2D
double d, e, f, g, h;

int main(){
	
	d = a[0] + b[0] + c[0];
	e = a[1] + b[1] + c[1];
	f = a[2] + b[2] + c[2];
	g = a1[1][2] + a[0] + b[0] + c[0];
	h = a2[5] + a[0] + b[0] + c[0];
	
	cout<<a1[2][2]<<endl;
	cout<<d<<"\n"<<e<<"\n"<<f<<"\n"<<g<<"\n"<<h<<endl;

	return 0;
}
