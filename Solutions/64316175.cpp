#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    int n;
    cin>>n;
    long long res=0;
    for(int i=1;i<=n;i++)
    {
        int a;
        scanf("%1d",&a);
        if(a%2==0)
        {
            res+=i;
        }
    }
    cout<<res<<endl;
    return 0;
}