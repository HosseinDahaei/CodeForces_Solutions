#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    int n;
    cin>>n;
    int arr[n];
    int sumsum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sumsum+=arr[i];
    }
     int sum=arr[0];
    int flag[n]={0};
    flag[0]=1;
    int k=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<= arr[0]/2)
        {
            sum+=arr[i];
            flag[i]=1;
            k++;
        }
    }
     if(sum>sumsum/2.0)
    {
        cout<<k<<endl;
        for(int i=0;i<n;i++)
        {
            if(flag[i]==1)
                cout<<i+1<<" ";
        }
        cout<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
     return 0;
}