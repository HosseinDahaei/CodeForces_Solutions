#include<bits/stdc++.h>
using namespace std;
 #define ll long long
const int N=200*1000+100;
vector<int>adj[N];
 int color[N];
int k;
void dfs(int x,int e){
     int cur=1;
    for(auto u:adj[x]){
        if(u==e)continue;
        if(cur==color[x])
            cur++;
        if(cur==color[e])
            cur++;
        if(cur==color[x])
            cur++;
        color[u]=cur;
         cur++;
        dfs(u,x);
    }
  }
void test(){
 int m;
 cin>>m;
 int leaf=-1;
 int n=m;
 while(--n){
  int a,b;
  cin>>a>>b;
  adj[a].push_back(b);
  adj[b].push_back(a);
  }
 for(int i=1;i<=m;i++)
     if(adj[i].size()==1) leaf=i;
    int k=1;
    for(int i=1;i<=m;i++)
        k=max(k,(int)adj[i].size()+1);
     color[leaf]=1;
 dfs(leaf,0);
 cout<<k<<endl;
 for(int i=1;i<=m;i++)
     cout<<color[i]<<" ";
 cout<<endl;
}
 int main()
{
  int t=1;
// cin>>t;
 while(t--){
  test();
 }
 }
               