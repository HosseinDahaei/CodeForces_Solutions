#include<bits/stdc++.h>
using namespace std;
 void func()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    long long int sum=0;
    for(int i=n-1;i>0;i--)
      sum+=max(0,arr[i-1]-arr[i]);
     cout<<sum<<endl;
  }
 int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
    func();
  return 0;
}