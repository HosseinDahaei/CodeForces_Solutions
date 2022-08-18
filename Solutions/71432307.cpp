/*
ID: dahaeeh1
TASK: ariprog
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 void func()
{
    int n,d;
    cin>>n>>d;
    int res=0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    while(d)
    {
        if(arr[n-1]<d/2.0)
        {
            res+=d/arr[n-1]-1;
            d-=  ( d/arr[n-1]-1 )*arr[n-1];
            //cout<<res<<" "<<d<<endl;
         }
        else
        {
            bool flag=false;
            for(int i=0;i<n;i++)
                if(arr[i]==d) flag=true;
            if(flag)
            {
                res+=1;
                break;
            }
            else
            {
                res+=2;
                break;
            }
        }
    }
    cout<<res<<endl;
}
 int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        func();
    }
    return 0;
}
      