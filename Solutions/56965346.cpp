#include<bits/stdc++.h>
using namespace std;
 int main()
{
    int n;
    cin>>n;
    if(n<7)
    {
        if(n==6)
            cout<<"1 2"<<endl;
        else if(n==1)
            cout<<"0 1"<<endl;
        else
            cout<<"0 2"<<endl;
        return 0;
    }
       int s[7];
    int more;
    for(int i=0;i<7;i++)
    {
        // 1
        int m=n;
        if(i>=5)
            s[i]=7-i;
        else
            s[i]=2;
        m-=7-i;
        // 2
        more=m%7;
        more-=5;
        if(more<0) more=0;
        s[i]+=2 * (m/7) + more;
        //cout<<s[i]<<endl;
    }
     int maxx=s[0];
    int minn=s[0];
    for(int i=0;i<7;i++)
    {
        if(s[i]>maxx) maxx=s[i];
        if(s[i]<minn) minn=s[i];
    }
    cout<<minn<<" "<<maxx<<endl;
    return 0;
}