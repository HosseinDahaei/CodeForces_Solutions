#include <bits/stdc++.h>
 using namespace std;
 void test()
{
    int play=0;
    int win=0;
    int n;
    cin>>n;
    bool flag=true;
    for(int i=1;i<=n;i++)
    {
        int a,b;
        cin>>a>>b;
        if(a<play || b<win || b-win>a-play)
            flag=false;
        play=a;
        win=b;
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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