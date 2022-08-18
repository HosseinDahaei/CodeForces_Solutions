#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(n>m)
    {
        cout<<0<<endl;
        return 0;
    }
    long long res=1;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            res*=abs(arr[j]-arr[i]);
            res%=m;
        }
    }
    cout<<res<<endl;
    return 0;
}