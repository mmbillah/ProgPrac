#include<iostream>
#include<fstream>
#include<string>
#include<cmath>

using namespace std;

class myClass {             // the class
    public:                 // access specifier
        int myNum;          // attribute variable
        string myString;    // attribute variable

};                          // always end class with a semicolon

int main(){

    myClass myObj;

    myObj.myNum = 5;
    myObj.myString = "Hello";

    cout<<myObj.myNum<<endl;
    cout<<myObj.myString<<endl;

    return 0;
}


