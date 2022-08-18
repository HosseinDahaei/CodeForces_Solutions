#include<bits/stdc++.h>
#include<iostream>
using namespace std;
  int main()
{
    int n,m;
    cin>>n>>m;
    int i;
    for(i=1;n>0;i++)
    {
        n--;
        if(i>1 && i%m==0)n++;
    }
    cout<<i-1<<endl;
    return 0;
 }