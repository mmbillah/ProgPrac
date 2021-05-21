#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){

	string line;
	ifstream myfile("name.txt",ios::in);

	while(getline(myfile,line))
	{
		cout << line << endl;
	}
	myfile.close();
	
	return 0;
}
