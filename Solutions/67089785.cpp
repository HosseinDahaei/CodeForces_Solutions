#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long a;
        cin>>a;
        a=a-14;
        a=a%14;
        if(a>0 && a<7)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}