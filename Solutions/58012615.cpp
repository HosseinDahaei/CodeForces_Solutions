#include <iostream>
#include<stdio.h>
using namespace std;
 int main()
{
    double d,h;
    cin>>h>>d;
     double result=( double)(d*d-h*h)/(2*h);
    //cout<<result<<endl;
    printf("%lf",result);
    return 0;
}