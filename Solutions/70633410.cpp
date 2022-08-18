#include<bits/stdc++.h>
using namespace std;
  void solve()
{
    int n;
    cin>>n;
    int zero=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a==0) zero++;
        sum+=a;
    }
    if(sum!=0 && zero==0)
    {
        cout<<0<<endl;
        return ;
    }
    if(sum!=0 && zero>0)
    {
        if(sum==-1*zero)
        cout<<zero+1<<endl;
        else
            cout<<zero<<endl;
        return ;
    }
    if(sum==0 && zero==0)
    {
        if(sum==-1*n)
            cout<<2<<endl;
        else
            cout<<1<<endl;
        return ;
    }
    if(sum==0 && zero>0)
    {
        cout<<zero<<endl;
    }
}
 int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        solve();
    }
    return 0;
}
              