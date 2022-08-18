#include <bits/stdc++.h>
 using namespace std;
 void test()
{
    int n,m,k;
    cin>>n>>m>>k;
    int res = min(n/k,m);
    m-=res;
     res-= ceil((float)m/(k-1) );
     cout<<res<<endl;
}
 int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        test();
    }
    return 0;
}