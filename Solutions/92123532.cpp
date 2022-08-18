#include<bits/stdc++.h>
using namespace std;
 void func()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  int left=0;
  int right=n-1;
  while(arr[left]<=0 && left<n+1)
    left++;
  right=left+1;
  while(arr[right]>=0 && right<n+1)
    right++;
  while(left<n-1  && right<=n-1)
  {
    int minval=min(arr[left],-1*arr[right]);
    arr[left]-= minval;
    arr[right]+=minval;
    while(arr[left]<=0 && left<n+1)
      left++;
     while( (arr[right]>=0 || right<left) && right<n+1)
      right++;
  }
  // for(int i=0;i<n;i++)
  //   cout<<arr[i]<<" ";
  // cout<<endl;
  long long res=0;
  for(int i=0;i<n;i++)
    res+=abs(arr[i]);
  cout<<res/2<<endl;
 }
  int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
    func();
  return 0;
}