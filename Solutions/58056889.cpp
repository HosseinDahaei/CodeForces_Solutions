#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 int main()
{
    int n;
    long long x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    sort(arr,arr+n);
     long long result=0;
    for(int i=0;i<n;i++)
    {
        result+=arr[i]*x;
        if(x>1) x--;
    }
     cout<<result<<endl;
    return 0;
}