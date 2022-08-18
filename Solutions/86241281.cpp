#include<bits/stdc++.h>
#include<iostream>
using namespace std;
  int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int res=0;
    res=max(res,a*b*c);
    res=max(res,a+b*c);
    res=max(res,a+b+c);
    res=max(res,a*(b+c));
    res=max(res,(a+b)*c);
    cout<<res<<endl;
     return 0;
 }