#include<bits/stdc++.h>
using namespace std;
 vector<int> neigh[100000+5];
int mark[100000+5];
int colors[100000+5];
int n,m;
int colored=0;
set<int> uncolored;
set<int> whites,blacks;//1 0
  void setcolor(int index,int color)
{
    mark[index]=1;
    colors[index]=color;
    colored++;
    uncolored.erase(index);
    if(color==1)
    {
        whites.insert(index);
    }
    else
    {
        blacks.insert(index);
    }
    for(int i=0;i<neigh[index].size();i++)
    {
        if( mark[ neigh[index][i] ]==0 )
        {
            setcolor( neigh[index][i] , !color );
        }
    }
 }
 int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++) uncolored.insert(i);
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        neigh[a].push_back(b);
        neigh[b].push_back(a);
    }
    while(colored<n)
    {
        setcolor( (int)*(uncolored.begin()),0 ) ;
    }
     for(set<int>::iterator it=whites.begin();it!=whites.end();it++)
    {
        int index=(int)*it;
        for(int i=0;i<neigh[index].size();i++)
        {
            if( colors[index]==colors[ neigh[index][i] ] )
            {
                //whites.erase(neigh[index][i]);
                cout<<-1<<endl;
                return 0;
            }
        }
    }
    for(set<int>::iterator it=blacks.begin();it!=blacks.end();it++)
    {
        int index=(int)*it;
        for(int i=0;i<neigh[index].size();i++)
        {
            if( colors[index]==colors[ neigh[index][i] ] )
            {
                //blacks.erase(neigh[index][i]);
                cout<<-1<<endl;
                return 0;
            }
        }
    }
    cout<<blacks.size()<<endl;
    for(set<int>::iterator it=blacks.begin();it!=blacks.end();it++)
    {
        int index=(int)*it;
        cout<<index<<" ";
    }
    cout<<endl;
    cout<<whites.size()<<endl;
    for(set<int>::iterator it=whites.begin();it!=whites.end();it++)
    {
        int index=(int)*it;
        cout<<index<<" ";
    }
     return 0;
}
              