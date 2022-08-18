#include<bits/stdc++.h>
using namespace std;
 const int N=100*1000+100;
vector<int>adj[N];
set<int>s;
int ans=0;
int mark[N];
  void dfs()
{
    int first=(int)*s.begin();
    cout<<first<<" ";
    ans++;
    s.erase(first);
    mark[first]=1;
    for(int i=0;i<adj[first].size();i++)
    {
        if( mark[adj[first][i] ]==0 )
        {
            s.insert( adj[first][i] );
        }
    }
 }
int main()
{
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    s.insert(1);
    while(ans<n)
        dfs();
      return 0;
}
              