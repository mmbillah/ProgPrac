#include<iostream>
using namespace std;

int x = 5; //declaring variable
int* ptr = &x; //declaring pointer

int main(){

	cout<< ptr << endl; //printing memory address
	cout<< *ptr << endl; //printing value from pointer or dereferencing

	return 0;
}

/* Note that the * sign can be confusing here, 
as it does two different things in our code:
When used in declaration (int* ptr), it creates a pointer variable.
When not used in declaration, it acts as a dereference operator. */
