#include <iostream>
 using namespace std;
 int main()
{
    long long n,m;
    cin>>n>>m;
    int n0,n1,n2,n3,n4;
    int m0,m1,m2,m3,m4;
     n0=n/5;
    n1=n/5;
    if(n%5>0) n1++;
    n2=n/5;
    if(n%5>1) n2++;
    n3=n/5;
    if(n%5>2) n3++;
    n4=n/5;
    if(n%5>3) n4++;
     m0=m/5;
    m1=m/5;
    if(m%5>0) m1++;
    m2=m/5;
    if(m%5>1) m2++;
    m3=m/5;
    if(m%5>2) m3++;
    m4=m/5;
    if(m%5>3) m4++;
     //cout<<m0<<m1<<m2<<m3<<m4<<endl;
    //cout<<n0<<n4<<n3<<n2<<n1<<endl;
    long long unsigned sum=0;
    //cout<<m0<<"*"<<n0<<"="<<(long long)m0*n0<<endl;
    sum+=(long long)m0*n0;
    //cout<<sum<<endl;
    sum+=(long long)m1*n4;
    //cout<<sum<<endl;
    sum+=(long long)m2*n3;
    //cout<<sum<<endl;
    sum+=(long long)m3*n2;
    //cout<<sum<<endl;
    sum+=(long long)m4*n1;
    cout<<sum<<endl;
     return 0;
}