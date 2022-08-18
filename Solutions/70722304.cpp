#include<bits/stdc++.h>
using namespace std;
 vector<int> neigh[100000+5];
int n,m;
int dist[100000+5];
int mark[100000+5];
double suml=0;
 void visit(int index,int d,long long p)
{
    mark[index]=1;
    dist[index]=d;
    if(neigh[index].size()==1 && index!=1)
    {
        //cout<<index<<" "<<d<<" "<<p<<" "<<(double)d/p<<endl;
        suml+=(double)d/p;
        //cntl++;
    }
    d++;
    int sons=0;
    for(int i=0;i<neigh[index].size();i++)
    {
        if( mark[ neigh[index][i] ] ==0)
        {
            sons++;
        }
    }
    p*=sons;
    p%=1000000000000000000;
    for(int i=0;i<neigh[index].size();i++)
    {
        if( mark[ neigh[index][i] ] ==0)
        {
            visit( neigh[index][i],d ,p);
        }
    }
}
 int main()
{
    cin>>n;
    m=n-1;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        neigh[a].push_back(b);
        neigh[b].push_back(a);
    }
    visit(1,0,1);
    printf("%.15f",suml);
    return 0;
}
              