#include <iostream>
using namespace std;

int *x,*y;
int *z;
int i;

/*
int sum*;

sum = new (nothrow) [5];

int add(int *c, int *d, int e){
    for(i=0;i<e;i++)
        return sum[i] = c[i] + d[i]; 
}
*/
int main(){
    
    int a = 5;

    x = new (nothrow) int[a];
    y = new (nothrow) int[a];
    z = new (nothrow) int[a];

    for (i=0; i<a; ++i){
        x[i] = 1;
        y[i] = 2;
        z[i] = x[i] + y[i];
    }    
    
    //add(x,y,5);

    for (i=0; i<a; ++i)
        cout<<z[i]<<endl;

    return 0;
}
