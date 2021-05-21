//declaring the class attributes as private is called "encapsulation".
//Acessing these private attributes (variables) of a class
//is done by the user defined methods "set" and "get".

#include<iostream>
#include<string>

using namespace std;

class Salary {
    private:
        int salary;
    public:
        void setSalary (int s) {
            salary = s;
        }
        int getSalary (){
            return salary;
        }
};

int main(){

    Salary mySalary;
    mySalary.setSalary(2000);
    cout<<mySalary.getSalary()<<endl;
    return 0;
}
