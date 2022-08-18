#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    long long a,b,n,s;
    for(int i=0;i<q;i++)
    {
        cin>>a>>b>>n>>s;
         int r=s%n;
         if(r>b || (long long)a*n+b<s)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}
 