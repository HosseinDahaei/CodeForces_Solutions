#include<bits/stdc++.h>
using namespace std;
 vector<int> neigh[150000+5];
vector< vector<int> > sub;
int n,m;
int mark[150000+5];
set<int> unmarked;
  void visit(int index)
{
    mark[index]=1;
    unmarked.erase(index);
    sub[ sub.size()-1 ].push_back(index);
    //cout<<" i pushed "<<index<<endl;
    for(int i=0;i<neigh[index].size();i++)
    {
        if( mark[ neigh[index][i] ]==0 )
            visit( neigh[index][i] );
    }
}
 int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++) unmarked.insert(i);
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        neigh[a].push_back(b);
        neigh[b].push_back(a);
    }
    while(unmarked.size()>0)
    {
        vector<int> a;
        sub.push_back(a);
        visit( (int)*(unmarked.begin()) );
    }
    /*for(int i=0;i<sub.size();i++)
    {
        for(int j=0;j<sub[i].size();j++)
        {
            cout<<sub[i][j]<<" ";
        }
        cout<<endl;
    }*/
     for(auto u:sub){
        for(auto v:u){
            if(neigh[v].size()!=u.size()-1){
                cout<<"NO\n";
                return 0;
             }
        }
    }
     cout<<"YES\n";
     return 0;
}
              