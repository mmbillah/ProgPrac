#include<iostream>
#include<string>

using namespace std;

//defining a function with a default parameter value
//the parameter "country" is often called an optional parameter
void func(string country = "Bangladesh"){
    cout<<country<<endl;
}

int main(){
    
    func("USA");
    func("Canada");
    func(); //will print the default value for the param "country"

    return 0;
}
