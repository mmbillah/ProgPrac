//A constructor in C++ is a special method that is automatically called
//when an object of a class is created.

#include<iostream>
#include<string>

using namespace std;

class myClass {
    public:
        myClass (){ //this the constructor
            cout<<"Hello World!"<<endl;
        }
};

int main(){

    myClass myObject; //contructor is called when the object is created
    return 0;
}
