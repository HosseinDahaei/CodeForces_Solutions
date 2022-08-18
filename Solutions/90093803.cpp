#include<bits/stdc++.h>
using namespace std;
 void func()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  if(n==1)
  {
    cout<<1<<endl;
    return ;
  }
  bool same=true;
  for(int i=0;i<n-1;i++)
    if(arr[i]!=arr[i+1])same=false;
  if(same)
    cout<<n<<endl;
  else
    cout<<1<<endl;
}
 int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
    func();
  return 0;
}