#include<iostream>

using namespace std;

int f (int n){

        if(n<=1)
                return 1;
        else
                return n*f(n-1);
}

int main(){

	int num;
	cout<<"Insert an integer: "<<endl;
	cin>>num;
	cout<<"The factorial of the inserted number is: "<<f(num)<<endl;

	return 0;
}

	
