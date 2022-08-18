#include<bits/stdc++.h>
using namespace std;
 void func()
{
  int l,r;
  cin>>l>>r;
  if(l*2<=r)
  {
    cout<<l<<" "<<2*l<<endl; 
  }
  else
  {
    cout<<"-1 -1"<<endl;
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