#include<bits/stdc++.h>
#include<algorithm>
#include<stdio.h>
using namespace std;
 int main()
{
     int n;cin>>n;
    int x,y;
    cin>>x>>y;
    int r=0;
    int l=0;
    int u=0;
    int d=0;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if(a>x)
            r++;
        if(a<x)
            l++;
        if(b>y)
            u++;
        if(b<y)
            d++;
    }
    if(l>=r&&l>=u&&l>=d)
        cout<<l<<"\n"<<x-1<<" "<<y;
    else if(r>=l&&r>=u&&r>=d)
        cout<<r<<"\n"<<x+1<<" "<<y;
    else if(u>=d&&u>=r&&u>=l)
        cout<<u<<"\n"<<x<<" "<<y+1;
    else
        cout<<d<<"\n"<<x<<" "<<y-1;
    return 0;
 }
  