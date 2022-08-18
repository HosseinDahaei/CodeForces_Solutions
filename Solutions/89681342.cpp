#include<bits/stdc++.h>
using namespace std;
 void func()
{
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    set<int> rows;
    for(int i=1;i<=n;i++)
      rows.insert(i);
    while(rows.size()>0)
    {
      cout<<x<<" "<<y<<endl;
      set<int>cols;
      for(int i=1;i<=m;i++)
      {
        if(i!=y)
          cols.insert(i);
      }
      for(auto u:cols)
      {
        y=u;
        cout<<x<<" "<<y<<endl;
       }
      rows.erase(x);
      x=(int)*(rows.begin());
    }
}
 int main()
{
  func();
  return 0;
}