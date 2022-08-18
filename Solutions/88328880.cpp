#include<bits/stdc++.h>
using namespace std;
int solve(string str,char a,char b)
{
  int n=str.size();
  int del=0;
  int index=0;
  int turn=0;// mean a
  while(index<n)
  {
    if(turn==0)// a
    {
      if(str[index]!=a)
      {
        del++;
      }
      else
      {
        turn=!turn;
      }
    }
    else// b
    {
      if(str[index]!=b)
      {
        del++;
      }
      else
      {
        turn=!turn;
      }
    }
    index++;
  }
  if(turn==1 && a!=b)return del+1;
  return del;
}
 void func()
{
  string str;
  cin>>str;
  int res=str.size();
  string nums="0123456789";
  for(int i=0;i<10;i++)
    for(int j=0;j<10;j++)
    {
      int out=solve(str,nums[i],nums[j]);
      //cout<<"call by "<<str<<" "<<nums[i]<<" "<<nums[j]<<"-->"<<out<<endl;
      res=min(res,out);
    }
  cout<<res<<endl;
}
   int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
    func();
   return 0;
}