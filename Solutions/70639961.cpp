#include<bits/stdc++.h>
using namespace std;
  void solve()
{
    int n;
    cin>>n;
    n*=2;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<arr[n/2]-arr[n/2-1]<<endl;
}
 int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        solve();
    }
    return 0;
}
              