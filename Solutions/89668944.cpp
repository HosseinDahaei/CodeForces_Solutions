#include<bits/stdc++.h>
using namespace std;
 void func()
{
  int r,g,b,w;
  cin>>r>>g>>b>>w;
  if( (r+g+b+w) %2==0)// just even
  {
    if(r%2 == g%2 && g%2==b%2 && b%2==w%2)
    {
      cout<<"Yes"<<endl;
    }
    else
      cout<<"No"<<endl;
   }
  else // one odd
  {
    if((r%2+b%2+g%2+w%2)==1 )
      cout<<"Yes"<<endl;
    else if((r%2+b%2+g%2+w%2)==3 && r*b*g!=0)
    {
      cout<<"Yes"<<endl;
    }
    else
      cout<<"No"<<endl;
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