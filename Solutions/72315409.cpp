#include <bits/stdc++.h>
 using namespace std;
  void func()
{
    int n;
    cin>>n;
    int arr[n];
    int brr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
        cin>>brr[i];
    sort(arr,arr+n);
    sort(brr,brr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<brr[i]<<" ";
    }
    cout<<endl;
 }
  int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        func();
    }
    return 0;
}