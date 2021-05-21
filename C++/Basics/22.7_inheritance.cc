// the attributes or methods of one class can be used in another class
// using ":" operator. This is called inheritance. 
//Multiple inheritance and multilevel inheritance is possible
//using -std=c++11 flag can remove the warnings

#include<iostream>
#include<string>

using namespace std;

//base or parent class
class Vehicle {
    public:
        string category = "Motor Vehicle"; //attribute
};

//derived or child class
class Car: public Vehicle {
    public:
        string make = "Toyota";
        string type = "4-Door Sedan";
        string transmission = "Front Wheel Drive (FWD)";
};

//grandchild class (derived from the child class)
class Toyota: public Car {
    public:
        string model = "Camry";
        int year = 2008;
        void honk(){ //method
            cout<<"Tuut, tuut!"<<endl;
        }
};

int main(){

    Toyota myCar;
    cout<<myCar.category<<" "<<myCar.make<<endl;
    cout<<myCar.type<<" "<<myCar.transmission<<endl;
    cout<<myCar.model<<" "<<myCar.year<<endl;
    myCar.honk();
    return 0;
}
