#include<iostream>
#include<string>
using namespace std;

string food="Pizza";
string &meal=food; //meal is a reference to food

int main(){

	cout<<food<<endl;
	cout<<meal<<endl;
	cout<<&food<<endl;

	return 0;
}
