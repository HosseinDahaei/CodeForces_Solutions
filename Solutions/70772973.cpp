#include<bits/stdc++.h>
using namespace std;
 int n,m,k;
vector<int> neigh[100000+5];
long long badstates=0;
int mark[100000+5];
set<int> unmarked;
vector< vector<int> > components;
  void dfs(int index)
{
    //cout<<"index "<<index<<endl;
    mark[index]=1;
    unmarked.erase(index);
    components[ components.size()-1 ].push_back(index);
    for(int i=0;i<neigh[index].size();i++)
    {
        if( mark[ neigh[index][i] ]==0 )
            dfs( neigh[index][i] );
    }
 }
  int main()
{
     cin>>n>>k;
    for(int i=1;i<=n;i++) unmarked.insert(i);
    m=n-1;
    for(int i=0;i<m;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(c==0)
        {
            neigh[a].push_back(b);
            neigh[b].push_back(a);
        }
    }
    while(unmarked.size()>0)
    {
        vector<int> a;
        components.push_back(a);
        dfs( (int)*(unmarked.begin()) );
    }
    long long result=1;
    for(int i=1;i<=k;i++)
    {
        result*=n;
        result%=1000*1000*1000+7;
    }
    for(int i=0;i<components.size();i++)
    {
        long long val=1;
        for(int j=0;j<k;j++)
        {
            val*=components[i].size();
            val%=1000*1000*1000+7;
        }
        result-= val;
    }
    while(result<0)
        result+=1000*1000*1000+7;
    result%=1000*1000*1000+7;
    cout<<result<<endl;
    return 0;
}
              