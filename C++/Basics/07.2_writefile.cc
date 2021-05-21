#include<iostream>
#include<fstream>

using namespace std;

int main(){

	ofstream myfile;
	myfile.open("name.txt",ios::app);
	myfile << "I live in Pullman\n";
	myfile.close();
	return 0;
}
