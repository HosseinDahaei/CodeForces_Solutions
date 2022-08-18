#include<bits/stdc++.h>
using namespace std;
 void func()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  int one=0;
  int zero=0;
  for(int i=0;i<n;i++)
  {
    if(arr[i]==0) zero++;
    else one++;
  }
   if(zero>=n/2)
  {
    cout<<n/2<<endl;
    for(int i=0;i<n/2;i++)
      cout<<"0 ";
    cout<<endl;
  }
  else
  {
    if(one%2==0)
    {
      cout<<one<<endl;
      for(int i=0;i<one;i++)
        cout<<"1 ";
      cout<<endl;
    }
    else
    {
      cout<<one-1<<endl;
      for(int i=0;i<one-1;i++)
        cout<<"1 ";
      cout<<endl;
    }
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