//access specifier "protected" is used only for inheritance.
//It's used by the child class for accessing attributes/methods of the parent class.

#include<iostream>
#include<string>

using namespace std;

class Employee {
    protected: //access specifier
        int salary;
};

class Programmer : public Employee {
    public:
        int bonus;
        void setSalary (int s){
            salary = s;
        }
        int getSalary (){
            return salary;
        }
};


int main(){
    
    Programmer mySelf;
    mySelf.setSalary(50000);
    mySelf.bonus = 15000;
    cout<<mySelf.bonus<<'\n'<<mySelf.getSalary()<<endl;
    return 0;
}
