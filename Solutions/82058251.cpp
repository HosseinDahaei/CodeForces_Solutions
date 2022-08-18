#include <bits/stdc++.h>
 using namespace std;
 void test()
{
    int n,x;
    cin>>n>>x;
    int odd=0;
    int even=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a%2==1)odd++;
        else even++;
    }
    if(odd==0)
    {
        cout<<"No"<<endl;
        return ;
    }
    if(x%2==1)
    {
        if(even>=x-1 || x-1-2*( (odd-1)/2)-even<=0 )
        {
            cout<<"Yes"<<endl;
        }
        else
            cout<<"No"<<endl;
    }
    else
    {
        if(even==0)
            cout<<"No"<<endl;
        else
        {
            if( x-2-2*( (even-1)/2 )-2*( (odd-1)/2 )<=0 )
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
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