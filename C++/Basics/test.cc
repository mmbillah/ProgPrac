#include<iostream>
using namespace std;

int main(){

    double myArray[3] = {1.3, 3.5, 5.7};
    double *myPtr = myArray;
    //myArray *myPtr;
    //myPtr = new (nothrow) myArray[3];

    cout<<*(myPtr+2)<<endl;

    return 0;
}
