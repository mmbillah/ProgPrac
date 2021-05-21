//Constructors can also take parameters (just like regular functions), 
//which can be useful for setting initial values for attributes.

#include<iostream>
#include<string>

using namespace std;

class Housing {
    public: //access specifier
        //attributes of the class "Housing"
        string type;
        string name;
        int num;
        //constructor with parameters
        //the next line is only for defining the constructor outside the class
        //Housing (string x, string y, int z);
        Housing (string x, string y, int z) {
            type = x; //set the attributes equal to the constructor parameters
            name = y;
            num = z;
        }
};

//defining the constructor outside the class
//using the scope resolution operator "::"
/*
Housing::Housing (string x, string y, int z){
    type = x;
    name = y;
    num = z;
}
*/

int main(){

    //create objects and pass the parameters
    Housing myNewHouse ("Grad","Terrace",103);
    Housing myOldHouse ("Grad","Kamiak",4);

    //print the attribute values
    cout<<myNewHouse.type<<" "<<myNewHouse.name<<" "<<myNewHouse.num<<endl;
    cout<<myOldHouse.type<<" "<<myOldHouse.name<<" "<<myOldHouse.num<<endl;
    return 0;
}
