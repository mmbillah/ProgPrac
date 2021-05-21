#include<iostream>
#include<string>

using namespace std;

//create a class named "Car" and give some attributes
class Car {
    public:
       string brand;
       string model;
       int year;
};

int main(){

    //define an object of the class "Car"
    Car myCar1;
    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 2019;

    //define another object of the class "Car"
    Car myCar2;
    myCar2.brand = "Ford";
    myCar2.model = "Focus";
    myCar2.year = 2020;

    //print out the atrributes for these two objects of class "Car"
    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
    
    return 0;
}
