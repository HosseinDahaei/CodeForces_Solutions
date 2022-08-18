#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int bs(int arr[],int s,int e,int val,int n);
 int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    int brr[m];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<m;i++)
        scanf("%d",&brr[i]);
    sort(arr,arr+n);
    for(int i=0;i<m;i++)
        cout<<bs(arr,0,n-1,brr[i],n)<<" ";
    return 0;
}
 int bs(int arr[],int s,int e,int val,int n)
{
    if(val<arr[s]) return 0;
    if(val>= arr[e]) return e+1;
    if(s==e)
        return s+1;
    int mid=ceil((e+s)/2.0);
    if(arr[mid]>val)
    {
        if(arr[mid-1]<= val) return mid;
        return bs(arr,s,mid,val,n);
    }
    else if(arr[mid]<=val)
    {
        if(mid==n) return n+1;
        return bs(arr,mid,e,val,n);
    }
}