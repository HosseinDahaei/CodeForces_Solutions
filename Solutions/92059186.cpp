#include<bits/stdc++.h>
using namespace std;
  void func()
{
  int n,k;
  cin>>n>>k;
  char str[n];
  char alaki;
  scanf("%c",&alaki);
  for(int i=0;i<n;i++)
    scanf("%c",&str[i]);
  bool ok=true;
  for(int i=0;i+k<n;i++)
  {
    int j=i+k;
    if(str[i]==str[j])
      continue;
    if(str[i]=='?')
    {
      str[i]=str[j];
    }
    else
    {
      if(str[j]!='?')
        {
          //cout<<"problem in i "<<i<<endl;
          ok=false;
          break;
        }
      else
        str[j]=str[i];
    }
  }
   // for(int i=0;i<n;i++)
  //   cout<<str[i];
  // cout<<endl;
    int zero=0;
  int one=0;
  int none=0;
  for(int i=0;i<k;i++)
  {
      if(str[i]=='0')zero++;
      else if(str[i]=='1')one++;
      else none++;
  }
  //cout<<zero<<" "<<one<<" "<<none<<endl;
  if(abs(zero-one)>none)
    ok=false;
  for(int i=k;i<n;i++)
  {
    if(str[i]=='0')zero++;
    else if(str[i]=='1')one++;
    else none++;
     if(str[i-k]=='0')zero--;
    else if(str[i-k]=='1')one--;
    else none--;
    if(abs(zero-one)>none)
      ok=false;
  }
  if(ok)
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;
 }
 int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
    func();
  return 0;
}