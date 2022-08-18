#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        bool ok=true;
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        int maxi=max(max(a,b),c);
        int need = 3*maxi- (a+b+c);
        if(need>n) ok=false;
        else
        {
            n-=need;
            if(n%3!=0) ok=false;
        }
        if(ok)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}