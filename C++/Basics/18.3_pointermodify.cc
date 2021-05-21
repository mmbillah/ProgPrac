#include<iostream>
using namespace std;

int x = 5; //declaring variables
int* ptr = &x; //declaring pointers

int main(){

	cout<<ptr<<endl; //printing the memory adress for x
	cout<<*ptr<<endl; //dereferencing ptr to get the value of x
	*ptr = 10; //accessing and changing the value of ptr
	cout<<*ptr<<endl; //dereferencing the new value of ptr 
	cout<<x<<endl; //printing the changed value of x

	return 0;
}
