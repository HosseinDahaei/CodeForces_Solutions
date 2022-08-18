#include<bits/stdc++.h>
using namespace std;
vector<int> neigh[100001];
int val[100001];
bool mark[100001];
int dfs(int v);
  int main()
{
    long long n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>val[i];
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        neigh[x].push_back(y);
        neigh[y].push_back(x);
    }
    long long sum=0;
    for(int i=1;i<=n;i++)
    {
        if(!mark[i])
            sum+=dfs(i);
    }
    cout<<sum<<endl;
    return 0;
 }
 int dfs(int v)
{
    mark[v]=true;
    int mini=val[v];
    for(int i=0;i<neigh[v].size();i++)
    {
        if(mark[neigh[v][i]]==false)
        {
            mini=min(mini,dfs(neigh[v][i]));
        }
    }
    return mini;
 }
               