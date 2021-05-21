#include<iostream>
#include<math.h>

using namespace std;

int i, j, k, n;

int main(){
	
	n = 5;
	for(i=0;i<n;i++){
		cout<<i<<endl;
		for(j=i+1;j<n;j++){
			cout<<" "<<j<<endl;
			for(k=j+1;k<n;k++){
				cout<<" "<<" "<<k<<endl;
			}
		}
	}
	
	return 0;
}
