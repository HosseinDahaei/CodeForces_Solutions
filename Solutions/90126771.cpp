#include<bits/stdc++.h>
using namespace std;
 void func()
{
    int n;
    long long k;
    cin>>n>>k;
    int arr[n];
     int mini=1e9+100;
    int maxi=(-1)*mini;
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
      maxi=max(maxi,arr[i]);
      mini=min(mini,arr[i]);
    }
     for(int i=0;i<n;i++)
    {
      arr[i]=maxi-arr[i];
    }
    maxi=maxi-mini;
    mini=0;
    // if(k==1)
    // {
    //   for(int i=0;i<n;i++)
    //   {
    //     cout<<arr[i]<<" ";
    //   }
    //   cout<<endl;
    // }
    // else
    if(k%2==0)
    {
      for(int i=0;i<n;i++)
      {
        cout<<maxi-arr[i]<<" ";
      }
      cout<<endl;
    }
    else
    {
      for(int i=0;i<n;i++)
      {
        cout<<arr[i]<<" ";
      }
      cout<<endl;
    }
 }
 int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
    func();
  return 0;
}