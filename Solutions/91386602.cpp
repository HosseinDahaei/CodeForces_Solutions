#include<bits/stdc++.h>
using namespace std;
 long long mod(long long int n,long long int m)
{
  if(n>0)
    return n%m;
  else
    {
      n*=-1;
      n%=m;
      n*=-1;
      n+=m;
      return n%m;
    }
}
 void func()
{
  int n;
  cin>>n;
  long long arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
   if(n==1)
  {
    cout<<"1 1"<<endl;
    cout<<"0"<<endl;
    cout<<"1 1"<<endl;
    cout<<"0"<<endl;
    cout<<"1 1"<<endl;
    cout<<-1*arr[n-1]<<endl;
    return ;
  }
  cout<<1<<" "<<n-1<<endl;
  for(int i=0;i<n-1;i++)
  {
    cout<<(long long)(n-1)*(mod(arr[i],n))<<" ";
    arr[i]+=(long long )(n-1)*(mod(arr[i],n));
  }
  cout<<endl;
   cout<<n<<" "<<n<<endl;
  cout<<(n-1)*(mod(arr[n-1],n))<<endl;
  arr[n-1]+=(long long)(n-1)*(mod(arr[n-1],n));
   cout<<1<<" "<<n<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<-1*arr[i]<<" ";
  }
  cout<<endl;
}
int main()
{
   func();
  return 0;
}