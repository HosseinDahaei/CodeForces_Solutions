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
    int res=0;
    int n,d;
    cin>>n>>d;
    cin>>res;
    for(int i=1;i<n;i++)
    {
        int a;
        cin>>a;
        while(a && d>=i)
        {
            a--;
            res++;
            d-=i;
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
      