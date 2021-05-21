#include<iostream>
#include<math.h>

using namespace std;

#define PI 3.1416
#define G 9.81

double circum, weight;
double radius = 2, mass = 80;

int main(){

	circum = 2*PI*radius; //circumference in meter
	weight = mass*G; //weight in Newton

	cout<<circum<<"\n"<<weight<<endl;

	return 0;
}
