#include <iostream>
 using namespace std;
 int main()
{
    long long n;
    int k;
    cin>>n>>k;
    int bestindex=1;
    long long bestamount;
    long long alaki;
    if(n==0)
    {
        cout<<1<<" "<<0<<endl;
        return 0;
    }
    for(int i=1;i<=k;i++)
    {
        cin>>alaki;
        if(i==1)
            bestamount=alaki;
        if(n%alaki<n%bestamount && alaki<=n)
        {
            bestamount=alaki;
            bestindex=i;
        }
    }
    cout<<bestindex<<" "<<n/bestamount<<endl;
     return 0;
}