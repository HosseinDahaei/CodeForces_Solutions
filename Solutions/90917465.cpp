#include<bits/stdc++.h>
using namespace std;
 void func()
{
  int n;
  cin>>n;
  string str;
  cin>>str;
  for(int i=0;i<2*n-1;i+=2)
  {
    cout<<str[i];
  }
  cout<<endl;
}
 int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
    func();
  return 0;
}