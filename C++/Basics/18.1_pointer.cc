#include<iostream>
using namespace std;

//variables
int x=5;
double y=5.5;
char z='A';
string food="Pizza";

//the type of the pointer has to match the type of the variable

//pointer variables
int* ptr1=&x;
double* ptr2=&y;
char* ptr3=&z;
string* ptr4=&food;

int main(){
	
	cout<<ptr1<<endl;
	cout<<ptr2<<endl;
	cout<<ptr3<<endl;
	cout<<ptr4<<endl;

	return 0;
}
