#include<bits/stdc++.h>
#include<iostream>
using namespace std;
  int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
    sort(arr,arr+n);
    int counter = 0;
    int i;
    for(i=n-1;i>=0 && m>0;i--)
    {
      m-=arr[i];
    }
    cout<<n-1-i<<endl;
    return 0;
 }