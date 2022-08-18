#include<bits/stdc++.h>
using namespace std;
  int main()
{
    int n,m;
    cin>>n>>m;
    set<int> bad;
    for(int i=0;i<m;i++)
    {
        int a;
        cin>>a;
        bad.insert(a);
         cin>>a;
        bad.insert(a);
    }
    cout<<n-1<<endl;
    int star=-1;
    for(int i=1;i<=n;i++)
    {
        if(bad.count(i)==0)
        {
            star=i;
            break;
        }
    }
    if(star==-1)
    {
        cout<<"shit"<<endl;
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        if(i!=star)
        cout<<star<<" "<<i<<endl;
    }
    return 0;
 }
               