#include<bits/stdc++.h>
using namespace std;
 void func()
{
  int n;
  cin>>n;
  int arr[n];
  int maxi=0;
  int sum=0;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
    maxi=max(maxi,arr[i]);
    sum+=arr[i];
  }
  if(sum%2==1 || maxi>sum-maxi)
  {
    cout<<"T"<<endl;
  }
  else
    cout<<"HL"<<endl;
 }
 int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
    func();
  return 0;
}