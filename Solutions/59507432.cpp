#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    int n;
    cin>>n;
    int arr[n];
    int maxx=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>maxx) maxx=arr[i];
    }
     for(int i=0;i<n;i++)
    {
        if(arr[i]==maxx)
        {
            if(maxx==1)
                arr[i]=2;
            else arr[i]=1;
            break;
        }
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}