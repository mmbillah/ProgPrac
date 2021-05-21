#include<iostream>
using namespace std;

char ch;
int pot;

int value (char ch){    
    
    pot = 0;
    
    if (ch=='a')
        pot += 5;
    if (ch=='b')
        pot += 10;
    if (ch=='a')
        pot += 5;
    if (ch=='b')
        pot += 10;

    return pot;
}

int main(){   
 
    cout<<"If a: "<<value('a')<<endl;
    cout<<"If b: "<<value('b')<<endl;
    
    return 0;
}
