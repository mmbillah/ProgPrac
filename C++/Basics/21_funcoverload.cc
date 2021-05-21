#include<iostream>
#include<string>
using namespace std;

//function
void funcAdd (int x, int y){
    cout<<x+y<<endl;
}

//overloaded function
void funcAdd (int x, int y, int z){
    cout<<x+y+z<<endl;
}

int main(){
    
    //call functions
    funcAdd(1,2);
    funcAdd(1,2,3);

    return 0;
}
