#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b);
 int main()
{
    int n,k;
    cin>>n>>k;
    int arr[k]={0};
    for(int i=0;i<n;i++)
    {
        int s;
        cin>>s;
        arr[s-1]+=1;
    }
    sort(arr,arr+k,cmp);
    int a=ceil(n/2.0);
    int two=0;
    int one=0;
    while(a>0)
    {
        a-=1;
        if(arr[0]>1)
        {
           arr[0]-=2;
           two++;
           if(arr[0]<arr[1])
                sort(arr,arr+k,cmp);
        }
        else
        {
           arr[0]-=1;
           one++;
           if(arr[0]<arr[1])
                sort(arr,arr+k,cmp);
        }
     }
    cout<<2*two+one<<endl;
    return 0;
}
bool cmp(int a,int b)
{
    return a>b;
}