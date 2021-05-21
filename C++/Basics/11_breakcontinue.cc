#include<iostream>

using namespace std;

int i;

int main(){

	for (i=0;i<10;i++){
		if (i==4)
			break;
		cout<<i<<endl;
	}

	for (i=0;i<10;i++){
                if (i==4)
                        continue;
                cout<<i<<endl;
	}

	return 0;
}
