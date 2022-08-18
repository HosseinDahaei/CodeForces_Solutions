#include<bits/stdc++.h>
using namespace std;
 int havecat[100000+5];
vector<int> neigh[100000+5];
int father[100000+5];
int mark[100000+5];
bool isleaf[100000+5];
int n,m;
int untilhere[100000+5];
  void setfather(int index)
{
    mark[index]=1;
    for(int i=0;i<neigh[index].size();i++)
    {
        if(mark[neigh[index][i]]==0)
        {
            setfather(neigh[index][i]);
            father[neigh[index][i]]=index;
            isleaf[index]=false;
        }
    }
}
 void solve2(int index)
{
    mark[index]=1;
    if(index==1)
    {
        if(havecat[index]) untilhere[index]=1;
        else untilhere[index]=0;
    }
    else
    {
        if(havecat[index]) untilhere[index]=untilhere[father[index]]+1;
        else untilhere[index]=0;
        if(untilhere[father[index]]>m) untilhere[index]=untilhere[father[index]];
    }
    for(int i=0;i<neigh[index].size();i++)
    {
        if(mark[neigh[index][i]]==0)
            solve2(neigh[index][i]);
    }
}
  int main()
{
    fill(isleaf,isleaf+100000+5,true);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>havecat[i];
    }
    for(int i=0;i<n-1;i++)
    {
        int a,b;
        cin>>a>>b;
        neigh[a].push_back(b);
        neigh[b].push_back(a);
    }
    //cout<<" ----"<<endl;
    father[1]=-1;
    setfather(1);
    //cout<<"set father is ok"<<endl;
    fill(mark,mark+100000+5,0);
    solve2(1);
    //cout<<"solve2 is ok"<<endl;
      stack<int> leafs;
    for(int i=1;i<=n;i++)
    {
        if(isleaf[i]) leafs.push(i);
    }
    int ans=0;
    while(leafs.size()>0)
    {
        if( untilhere[leafs.top()]<=m) ans++;
        leafs.pop();
    }
    cout<<ans<<endl;
    return 0;
}
              