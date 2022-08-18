#include<bits/stdc++.h>
using namespace std;
 #define ll long long
 void mytest()
{
    int n;
    cin>>n;
    if(n%2){
        cout<<7;
        n-=3;
        while(n){
            cout<<1;
            n-=2;
        }
        cout<<endl;
    }
    else
    {
        for(int i=0;i<n/2;i++)
        cout<<1;
        cout<<endl;
    }
 }
   int main()
{
    int t=1;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        mytest();
    }
    return 0;
  }
               