#include<bits/stdc++.h>
using namespace std;
 void func()
{
  int n;
  cin>>n;
  int arr[50];
  fill(arr,arr+50,0);
  string str;
  for(int i=0;i<n;i++)
  {
    cin>>str;
    for(int j=0;j<str.size();j++)
      arr[str[j]-'a']++;
  }
  bool ok=true;
  for(int i=0;i<50;i++)
  {
    if(arr[i]%n>0)
      ok=false;
  }
  if(ok)cout<<"YES"<<endl;
  else  cout<<"NO"<<endl;
}
 int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
    func();
  return 0;
}