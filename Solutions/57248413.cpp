#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool isOk(int a,int b,int k);
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int arr[m+1];
    for(int i=0;i<m+1;i++)
    {
        cin>>arr[i];
    }
    int feodor=arr[m];
    int result=0;
    for(int i=0;i<m;i++)
    {
        if(isOk(feodor,arr[i],k))
            result++;
    }
    cout<<result<<endl;
    return 0;
}
 bool isOk(int a,int b,int k)
{
    int s=0;
    while(a>0 || b>0)
    {
        if(a%2!=b%2)
            s++;
        a/=2;
        b/=2;
     }
    if(s<=k )
        return true;
    else return false;
}