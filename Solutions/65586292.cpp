#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int d=0;d<t;d++)
    {
        int n,x,a,b;
        cin>>n>>x>>a>>b;
        int dis=abs(b-a);
        dis=min(dis+x,n-1);
        cout<<dis<<endl;
    }
    return 0;
}