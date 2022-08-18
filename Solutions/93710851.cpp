#include<bits/stdc++.h>
using namespace std;
  void func()
{
  int n;
  cin>>n;
  int arr[n];
  int data[50]={0};
  for(int i=0;i<n;i++)
  {
    int alaki;
    scanf("%d",&alaki);
    arr[i]=log2(alaki);
    //cout<<arr[i]<<endl;
  }
  long long counter=0;
  data[arr[n-1]]++;
  for(int i=n-2;i>=0;i--)
  {
    counter+=data[arr[i]];
    data[arr[i]]++;
  }
  cout<<counter<<endl;
}
 int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
    func();
  return 0;
}