#include <bits/stdc++.h>
  using namespace std;
bool notin(int x,int y);
bool isgood(int x,int y);
void badadd(int x,int y);
vector<int> xtree;
vector<int> ytree;
 int main()
{
    int n;
    cin>>n;
    int xarr[n];
    int yarr[n];
    for(int i=0;i<n;i++)
    {
        cin>>xarr[i]>>yarr[i];
    }
     xtree.push_back(xarr[0]);
    ytree.push_back(yarr[0]);
    for(int i=1;i<n;i++)
    {
        int xal,yal;
        bool shit=true;
        for(int j=0;j<n;j++)
        {
            if(notin(xarr[j],yarr[j]))
            {
                //cout<<xarr[j]<<","<<yarr[j]<<"not in "<<endl;
                xal=xarr[j];
                yal=yarr[j];
                if(isgood(xarr[j],yarr[j]))
                {
                    //cout<<"it is good"<<endl;
                    shit=false;
                    xtree.push_back(xarr[j]);
                    ytree.push_back(yarr[j]);
                    break;
                }
              }
        }
        if(shit)
        {
            badadd(xal,yal);
        }
      }
    //cout<<xtree.size()<<" ---- "<<ytree.size()<<endl;
    /*for(int j=0;j<xtree.size();j++)
    {
        cout<<xtree[j]<<","<<ytree[j]<<endl;
    }*/
    cout<<xtree.size()-n<<endl;
    return 0;
}
 bool notin(int x,int y)
{
    for(int i=0;i<xtree.size();i++)
    {
        if(x==xtree[i] && y==ytree[i])
            return false;
    }
    return true;
}
 bool isgood(int x,int y)
{
    for(int i=0;i<xtree.size();i++)
    {
        if(x==xtree[i] || y==ytree[i])
        {
            return true;
        }
    }
    return false;
}
void badadd(int x,int y)
{
    int newx,newy;
    newx=x;
    newy=ytree[0];
    xtree.push_back(newx);
    ytree.push_back(newy);
    xtree.push_back(x);
    ytree.push_back(y);
}