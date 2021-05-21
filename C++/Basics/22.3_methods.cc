//functions of a class are called method

#include<iostream>
#include<string>

using namespace std;

class myClass {
    public:
        //define a function inside the class
        void myMethod (){
            cout<<"Hello World"<<endl;
        }
        //declare another function inside the class
        //but define it outside the class using 
        //the scope resolution operator (::)
        void myMethod2 ();
};

//defining the function outside the class using ::
void myClass::myMethod2 (){
    cout<<"Stay Home! Stay Healthy!"<<endl;
}

int main(){

    myClass myObj;
    myObj.myMethod();
    myObj.myMethod2();

    return 0;
}
