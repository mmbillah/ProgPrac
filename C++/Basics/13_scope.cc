//this program focuses on the scope of a variable
//:: is the scope resolution operator

#include<iostream>

using namespace std;

int global1 = 5, global2 = 10, global3 = 15; //three global variables

int main(){

	cout<<global1<<endl; //acessing the global1 variable
	int global2 = 11; //value for global2 is being overwritten
	cout<<global2<<endl;
	int global3 = 20; //value for global3 is being overwritten
	cout<<::global3<<endl; //printing the initial value
	cout<<global3<<endl; //printing the overwritten value
	cout<<global3+::global3<<endl; //adding them together
	return 0;
}
