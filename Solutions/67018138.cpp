#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
 int main()
{
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    int sum=0;
    if(e>f)
    {
        int k=min(a,d);
        sum+=k*e;
        d-=k;
        k=min(min(d,c),b);
        sum+=k*f;
     }
    else
    {
        int k=min(min(d,c),b);
        sum+=k*f;
        d-=k;
        k=min(a,d);
        sum+=k*e;
    }
    cout<<sum<<endl;
    return 0;
 }
  