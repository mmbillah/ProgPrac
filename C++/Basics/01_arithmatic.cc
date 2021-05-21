#include <iostream>
using namespace std;

int a = 5; //c-like initialization    
int d (2); //constructor initialization
int c {a/d}; //uniform initializaiton

int main(){
	cout<<a //same line until
        <<d //semicolon is
        <<c<<endl; //reached
	return 0;
}
