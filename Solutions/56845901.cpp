#include <iostream>
#include<algorithm>
using namespace std;
bool cmp(int a,int b);
 int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    int b[n];
    long long minsum=0;
    int d[n];
    long long maxsum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        minsum+=b[i];
        maxsum+=a[i];
        d[i]=a[i]-b[i];
    }
    sort(d,d+n,cmp);
    if(minsum>m)
    {
        cout<<-1<<endl;
        return 0;
    }
    long long badvalue=maxsum-m;
    int result=0;
    while(badvalue>0)
    {
     badvalue-=d[result];
     result++;
    }
    cout<<result<<endl;
    return 0;
}
bool cmp(int a,int b)
{
    return a>b;
}