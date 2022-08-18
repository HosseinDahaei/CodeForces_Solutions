#include<bits/stdc++.h>
using namespace std;
  void func()
{
  int n,q;
  cin>>n>>q;
  int arr[n];
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
  long long int best[n],worst[n];
  best[n-1]=worst[n-1]=arr[n-1];
  long long int mybest=best[n-1];
  long long int myworst=worst[n-1];
  for(int i=n-2;i>=0;i--)
  {
    best[i]=arr[i];
    if(myworst<0)best[i]-=myworst;
    worst[i]=arr[i];
    if(mybest>0)worst[i]-=mybest;
     if(mybest<best[i])mybest=best[i];
    if(myworst>worst[i])myworst=worst[i];
  }
  // for(int i=0;i<n;i++)
  //   cout<<best[i]<<" ";
  // cout<<endl;
  // for(int i=0;i<n;i++)
  //   cout<<worst[i]<<" ";
  // cout<<endl;
  cout<<mybest<<endl;
 }
 int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
    func();
  return 0;
}