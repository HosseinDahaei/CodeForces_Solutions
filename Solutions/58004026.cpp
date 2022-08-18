#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    int n,x,y;
    cin>>n>>x>>y;
    int inf=1000000000;
    int arr[n+x+y+1];
    fill(arr,arr+n+x+y+1,inf);
    for(int i=x+1;i<n+x+1;i++)
    {
        cin>>arr[i];
    }
    /*for(int i=0;i<n+x+y+1;i++)
        cout<<arr[i]<<" , ";
    cout<<endl;*/
    for(int i=x+1;i<n+x+1;i++)
    {
        bool flag=true;
        for(int j=i-x;j<i;j++)
            if(arr[j]<arr[i]) flag=false;
        for(int j=i+1;j<i+y+1;j++)
            if(arr[j]<arr[i]) flag=false;
        if(flag)
        {
            cout<<i-x<<endl;
            return 0;
        }
    }
     return 0;
}