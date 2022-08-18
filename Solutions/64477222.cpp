#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    int n;
    cin>>n;
    int brr[n],arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&brr[i],&arr[i]);
    }
    long long p;
    cin>>p;
    for(int i=0;i<n;i++)
    {
        if(p<=arr[i] && p>=brr[i])
        {
            cout<<n-i<<endl;
        }
    }
    return 0;
}