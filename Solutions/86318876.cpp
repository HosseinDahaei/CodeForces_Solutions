#include<iostream>
using namespace std;
 void func(int arr[],int start,int end ,int key)
{
   if(key<=arr[start])
  {
    cout<<start+1<<endl;
    return ;
  }
  if(arr[end]==key)
  {
    cout<<end+1<<endl;
    return;
  }
  if(end-start==1)
  {
    if(arr[start]<key)
    {
      cout<<end+1<<endl;
    }
    else
      cout<<start+1<<endl;
    return;
  }
  int mid=(start+end)/2;
  if(arr[mid]>=key)
  {
    func(arr,start,mid,key);
  }
  else
  {
    func(arr,mid,end,key);
  }
}
 int main()
{
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
      sum+=arr[i];
      arr[i]=sum;
    }
     int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
      int a;
      cin>>a;
      func(arr,0,n-1,a);
    }
    return 0;
 }