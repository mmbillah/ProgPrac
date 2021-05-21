#include<iostream>
#include<string>

using namespace std;

string str1, str2, str3, str;

int main(){

	str1 = "My Name ";
	str2 = "is ";
	str3 = "Md Muhtasim Billah";
	str = str1 + str2 + str3;
	
	// different ways for printing
	cout<<str<<endl;
	cout<<str1<<str2<<str3<<endl;
	cout<<str1+str2+str3<<endl; //concatenation
	cout<<str1.append(str2.append(str3))<<endl; //append func
	
	cout<<"The length of the string is: "<<str.length()<<endl; //string length
	cout<<str[20]<<endl; //accessing a character of the string

	return 0;
}
