// Pointers can be used with arrays as well

#include<iostream>
using namespace std;

int* a[10];     // an array of pointers to integers
int  b[10];     // an array of integers

int main(){
    
    //assigning values to the array elements
    for (int i=0;i<10;i++){
        b[i] = i*i;
    }
    
    //referencing
    for (int i=0;i<10;i++){
        a[i] = &b[i];
    }
    
    //printing the memory addresses and the values (by dereferencing)
    for (int i=0;i<10;i++){

        cout<<"Memory address: "<<a[i]<<endl;
        cout<<"Value: "<<*a[i]<<endl;
    }
    
    // however, while dereferencing, if the value is changed, the value of the original variable will be changed as well
    for (int i=0;i<10;i++){

        *a[i] = *a[i] * 2; //multiply each value by 2
        cout<<"Changed Values: "<<b[i]<<endl; //to observe the change of integer array b.
    }

    return 0;
}
