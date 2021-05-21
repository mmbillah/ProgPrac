/*
    * A pointer is a variable that is used to store the memory address of another variable. Thus, the value of a pointer variable is nothing but a memory address.
    * It can store memory address of different types of variables (int, float, double, char and string etc.).The pointer variable has to be of the same type as the variable it'll be pointing to.
    * For declaring a pointer, asterisk operator (*) is used.
    * For assigning the memory address of a variable to a pointer, referencing operator (&) is used.
    * A pointer can also be used to extract the value of the variable it is pointing to by using the dereferencing operator (*).
    * Thus, the asterisk (*) is used for both declaring and dereferencing a pointer and should not get confused while dealing with pointers.
*/


#include<iostream>
using namespace std;

int*    a;      // a is a pointer variable that points to an integer's memory address
int     b=5;    // b is an integer with a value of 5
double* c;      // c is a pointer variable that points to a double's memory address
double  d=2.5;  // d is a double with a value of 2.5

int main(){

    a = &b;     // a now indicates to the memory address of integer b (referencing)
    c = &d;     // c now indicates to the memory address of double d (referencing)
    
    cout<<"Memory address of integer b = "<<a<<endl;    // print out the "memory address" of integer b
    cout<<"Memory address of double d = "<<c<<endl;     // print out the "memory address" of double d
    
    cout<<"Value of integer b = "<<*a<<endl;    // print out the "value" of integer b (dereferencing)
    cout<<"Value of double d = "<<*c<<endl;     // print out the "value" of double d (dereferencing)

    return 0;
}
