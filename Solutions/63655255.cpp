#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
     int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);
    if(k==0)
    {
        int first=arr[0];
        if(first==1) cout<<-1<<endl;
        else
            cout<<1<<endl;
    }
    else
    {
        if(k==n)
        {
            cout<<arr[n-1]<<endl;
            return 0;
        }
        int a,b;
        a=arr[k-1];
        b=arr[k];
        if(a==b)
            cout<<-1<<endl;
        else
            cout<<arr[k-1]<<endl;
    }
    return 0;
}