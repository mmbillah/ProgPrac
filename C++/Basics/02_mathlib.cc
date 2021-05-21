#include<iostream>
#include<math.h>

using namespace std;

double a, b, c, d, e;

int main(){
	a = exp(2);
	b = tan(a);
	c = erfc(b);
	d = atan(c);
	e = sqrt(d);
	cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<d<<"\n"<<e<<endl;
	return 0;
}
