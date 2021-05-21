#include<iostream>
using namespace std;

int* a; //we only define a pointer, not telling whether it's an array or whatever
int  b[3]; //an array of integers

int main(){
    
    //we convert the pointer into an array of pointers
    //the 'new' keyword always returns a pointer
    //thus, the use of '&' and '*' operators aren't required anymore
    a = new (nothrow) int [3];
    
    //assign values to the integer array a
    for(int i=0;i<3;i++){
        b[i] = i*2;
    }
    
    //assign the pointers to these integers
    //notice that we don't need the '&' for referencing
    for(int i=0;i<3;i++){
        a[i] = b[i];
    }
    
    //print the values stored in the memory addresses
    //notice that we don't need the '*' for dereferencing
    for(int i=0;i<3;i++){
        cout<<a[i]<<endl;
    }
    
    //we could do the same thing with only one loop now, as shown below
    for(int i=0;i<3;i++){
        a[i] = i*2;
        cout<<a[i]<<endl;
    }

    return 0;
}
