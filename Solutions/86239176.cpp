#include<bits/stdc++.h>
#include<iostream>
using namespace std;
  int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int one=0;
    int zero=0;
    for(int i =0;i<n;i++)
    {
      if(str[i]=='z')zero++;
      if(str[i]=='n')one++;
    }
    for(int i=0;i<one;i++)
      cout<<"1 ";
    for(int i=0;i<zero;i++)
      cout<<"0 ";
    cout<<endl;
    return 0;
 }