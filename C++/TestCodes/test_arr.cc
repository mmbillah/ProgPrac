#include<iostream>

using namespace std;

int i,j,k;
int arr[3][3][3];

int main(){

    for (i=0;i<3;i++)
        for (j=0;j<3;j++)
            for (k=0;k<3;k++)
                arr[i][j][k]=1;

    for (i=0;i<3;i++)
        for (j=0;j<3;j++)
            for (k=0;k<3;k++)
                cout<<arr[i][j][k]<<endl;
    
    cout<<"element: "<<arr[0][1][2]*arr[2][1][0]<<endl;

    return 0;
}
