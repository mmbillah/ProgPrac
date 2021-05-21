#include<iostream>
using namespace std;

int test (int dist){

    if (dist>3) return dist+1;

    return dist;
}

int main(){

    cout<<test(3)<<endl;

    return 0;
}
