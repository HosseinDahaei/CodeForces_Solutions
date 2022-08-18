#include<bits/stdc++.h>
using namespace std;
 vector<int> neigh[100000+5];
int colors[100000+5];
int n;
long long answer=0;
int black=0;
int white=0;
int mark[100000+5];
 void setcolor(int index,int color) // 0 or 1
{
    //cout<<index<<" "<<color<<endl;
    colors[index]=color;
    if(color==1) white++;
    else black++;
    for(int i=0;i<neigh[index].size();i++)
    {
        if(colors[neigh[index][i]]==-1)
        setcolor(neigh[index][i],!color);
    }
 }
 void solve(int index)
{
    mark[index]=1;
    int sumb=0;
    int sumw=0;
    for(int i=0;i<neigh[index].size();i++)
    {
        if(mark[neigh[index][i]]==0)
            solve(neigh[index][i]);
         if(colors[neigh[index][i]]==0) sumb++;
        else sumw++;
    }
    if(colors[index]==1)
        answer+=black-sumb;
    else
        answer+=white-sumw;
 }
 int main()
{
    fill(colors,colors+100000+5,-1);
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        int a,b;
        cin>>a>>b;
        neigh[a].push_back(b);
        neigh[b].push_back(a);
    }
    setcolor(1,0);
    //cout<<"color set completed!"<<endl;
    solve(1);
    cout<<answer/2<<endl;
     return 0;
}
              