#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    int n,m;
    cin>>n>>m;
    set<int> x,y;
    for(int i=1;i<=n;i++)
    {
        x.insert(i);
        y.insert(i);
    }
    for(int i=0;i<m;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        x.erase(a);
        y.erase(b);
        //cout<<x.size()<<" "<<y.size()<<endl;
         long long res=(long long)x.size()*y.size();
        printf("%I64d ",res);
    }
    return 0;
}