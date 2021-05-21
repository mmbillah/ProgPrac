#include<iostream>
using namespace std;

int NP = 8;
//double x[NP],y[NP],z[NP],Q[NP];

double add(double *,double *,double *);
double mult(double *,double *,double *);

int main(){

    int i;
    double L = 10.0;
    double s1 = 0.50*L;
    //int NP = 8;
    double x[NP],y[NP],z[NP],Q[NP];
    double result = 0.0;

    x[ 0] = 0;  y[ 0] = 0;  z[ 0] = 0;  Q[ 0] =  1.0;
    x[ 1] = s1; y[ 1] = s1; z[ 1] = 0;  Q[ 1] =  1.0;
    x[ 2] = s1; y[ 2] = 0;  z[ 2] = s1; Q[ 2] =  1.0;
    x[ 3] = 0;  y[ 3] = s1; z[ 3] = s1; Q[ 3] =  1.0;
    x[ 4] = s1; y[ 4] = 0;  z[ 4] = 0;  Q[ 4] = -1.0;
    x[ 5] = 0;  y[ 5] = s1; z[ 5] = 0;  Q[ 5] = -1.0;
    x[ 6] = 0;  y[ 6] = 0;  z[ 6] = s1; Q[ 6] = -1.0;
    x[ 7] = s1; y[ 7] = s1; z[ 7] = s1; Q[ 7] = -1.0;
    
    result += add(x,y,z);
    result += mult(x,y,z);
    
    cout<<result<<endl;

    return 0;
}

double add(double x[],double y[],double z[]){

    double sum = 0.0;

    for (int i=0;i<NP;i++)
        sum += x[i] + y[i] + z[i];
    
    return sum;
}

double mult(double x[],double y[],double z[]){

    double sum = 0.0;

    for (int i=0;i<NP;i++)
        sum += x[i] * y[i] * z[i];

    return sum;
}
