#include<bits/stdc++.h>
using namespace std;
 void func()
{
      string str;
      cin>>str;
      int x;
      cin>>x;
      int brr[str.size()];
      fill(brr,brr+str.size(),1);
      for(int i=0;i<str.size();i++)
      {
        if(str[i]=='0')
        {
          if(i+x<str.size())
            brr[i+x]=0;
          if(i-x>=0)
            brr[i-x]=0;
        }
      }
      bool ok=true;
      for(int i=0;i<str.size();i++)
      {
        if(brr[i]==1)
        {
          if(i+x<str.size())
          {
            if(str[i+x]!='1')
              ok=false;
          }
          if(i-x>=0)
          {
            if(str[i-x]!='1')
              ok=false;
           }
        }
        if(str[i]=='1')
        {
          bool inerok=false;
          if(i+x<str.size())
          {
            if(brr[i+x]==1)
              inerok=true;
          }
          if(i-x>=0)
          {
            if(brr[i-x]==1)
              inerok=true;
           }
          if(inerok==false)
            ok=false;
        }
       }
      if(ok)
      {
        for(int i=0;i<str.size();i++)
          cout<<brr[i];
        cout<<endl;
      }
      else
        cout<<-1<<endl;
   }
int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
    func();
  return 0;
}