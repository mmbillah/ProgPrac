#include<iostream>
#include<string>

using namespace std;

struct Info {
    
    string firstname, lastname;
    int age, salary;

    void printDetails(){
        cout<<firstname<<" "<<lastname<<" "<<age<<" "<<salary<<endl;
    }
} myInfo;

int main()
{

    myInfo.firstname = "Md Muhtasim";
    myInfo.lastname = "Billah";
    myInfo.age = 27;
    myInfo.salary = 50000;
    myInfo.printDetails();

    return 0;
}
