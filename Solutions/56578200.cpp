#include <iostream>
#include<algorithm>
using namespace std;
 int main()
{
    int n;
    cin>>n;
    int arr[n];
    int a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        arr[i]=a;
    }
    sort(arr,arr+n);
    if(n>=3)
    {
        if(arr[n-1]>= arr[n-2]+arr[n-3])
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    if(n%2==0)
    {
        for(int i=0;i<n-1;i+=2)
        {
            cout<<arr[i]<<" ";
         }
        for(int i=n-1;i>0;i-=2)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    else
    {
        for(int i=1;i<n-1;i+=2)
        {
            cout<<arr[i]<<" ";
         }
        for(int i=n-1;i>-1;i-=2)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
       return 0;
}