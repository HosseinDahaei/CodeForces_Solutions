#include <iostream>
 using namespace std;
 int main()
{
    int n;
    cin>>n;
    long long maxx=0;
    long long maxnum=0;
    long long minnum=0;
    long long minn=1000000000;
    for(int i=0;i<n;i++)
    {
        long long k;
        cin>>k;
        if(k==maxx)
        {
            maxnum++;
        }
        if(k==minn)
            minnum++;
        if(k>maxx)
        {
            maxx=k;
            maxnum=1;
        }
        if(k<minn)
        {
            minn=k;
            minnum=1;
        }
    }
    if(maxx==minn)
    {
        cout<<0<<" "<<(minnum-1)*minnum/2<<endl;
    }
    else
    {
        cout<<maxx-minn<<" "<<(long long)maxnum*minnum<<endl;
    }
    return 0;
}