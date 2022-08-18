#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 int main()
{
    int n,k;
    cin>>n>>k;
    long long minval=100*k+5;
    int minindex=0;
    queue <int> data;
    long long sum=0;
    for(int i=0;i<k;i++)
    {
        int a;
        cin>>a;
        sum+=a;
        data.push(a);
    }
    minindex=0;
    minval=sum;
    for(int i=1;i<=n-k;i++)
    {
        sum-=data.front();
        data.pop();
        int a;
        cin>>a;
        sum+=a;
        data.push(a);
        if(sum<minval)
        {
            minval=sum;
            minindex=i;
        }
    }
    cout<<minindex+1<<endl;
       return 0;
}