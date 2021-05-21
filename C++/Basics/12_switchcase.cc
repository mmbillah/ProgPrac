#include<iostream>

using namespace std;

int main(){

	int x=2;

	switch (x){
		case 1:
			cout<<"The choice is 1."<<endl;
			break;
		case 2:
			cout<<"The choice is 2."<<endl;
			break;
		case 3:
			cout<<"The choice is 3."<<endl;
			break;
		default:
			cout<<"The choice is other than 1,2,3."<<endl;
			//break;
	}

	return 0;
}
