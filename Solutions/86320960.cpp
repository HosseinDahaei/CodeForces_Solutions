#include<iostream>
using namespace std;
 void func()
{
  int n;
  cin>>n;
  int arr[n];
  string alaki;
  cin>>alaki;
  for(int i=0;i<n;i++)
    arr[i]=alaki[i]-'0';
  int brr[n];
  int crr[n];
  int i=0;
  while(arr[i]!=1 && i<n)
  {
    if(arr[i]==2)
      brr[i]=crr[i]=1;
    if(arr[i]==0)
      brr[i]=crr[i]=0;
    i++;
  }
 if(arr[i]==1 && i<n)
  {
    brr[i]=1;
    crr[i]=0;
    i++;
  }
  while(i<n)
  {
    if(arr[i]==2)
      brr[i]=0,crr[i]=2;
    if(arr[i]==0)
      brr[i]=crr[i]=0;
    if(arr[i]==1)
      crr[i]=1,brr[i]=0;
    i++;
  }
  for(int i=0;i<n;i++)
    cout<<brr[i];
  cout<<endl;
     for(int i=0;i<n;i++)
      cout<<crr[i];
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