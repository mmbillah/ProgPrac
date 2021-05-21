#include<iostream>
#include<math.h>

using namespace std;

double square(double number);
double cube(double number);



double result;

int main(){

	result = square(4.0) + cube(3.0);
	cout<<result<<endl;
	return 0;
}

double square(double number){

        double squared_value;

        squared_value = number*number;

        return squared_value;
}

double cube(double number){

        double cube_value;

        cube_value = number*number*number;

        return cube_value;
}
