#include<bits/stdc++.h>
using namespace std;
  void func()
{
  int n;
  cin>>n;
  int arr[n];
  int brr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
    brr[i]=arr[i];
  }
  sort(brr,brr+n);
  bool shit=true;
  for(int i=0;i<n;i++)
  {
    if(arr[i]!=brr[n-1-i])shit=false;
  }
  for(int i=0;i<n-1;i++)
    if(brr[i]==brr[i+1])shit=false;
  if(brr[0]==brr[n-1])shit=false;
  if(shit)
    cout<<"NO"<<endl;
  else
    cout<<"YES"<<endl;
}
 int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
    func();
  return 0;
}