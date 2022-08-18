#include <bits/stdc++.h>
  using namespace std;
 void test()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    long long total=0;
    total=b;
    if(c-d<=0 && b<a)
    {
        cout<<-1<<endl;
        return ;
    }
    if(a>b)
    {
        long long val=  ceil( (double)(a-b)/(c-d) );
        //cout<<a-b<<" / "<<c-d<<endl;
        //cout<<val<<endl;
        total+= val*(long long)c;
     }
    cout<<total<<endl;
}
 int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        test();
    }
    return 0;
}