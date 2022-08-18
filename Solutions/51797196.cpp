#include <iostream>
#include<string>
#include<stdio.h>
using namespace std;
 int main()
{
    int d=0;
    int a=0;
    int n;
    cin>>n;
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='D')
            d++;
        else
            a++;
    }
    if(d>a) cout<<"Danik"<<endl;
    if(d<a) cout<<"Anton"<<endl;
    else if(d==a) cout<<"Friendship"<<endl;
    return 0;
}