#include <bits/stdc++.h>
 using namespace std;
bool isPrime(long long n);
 int main()
{
    long long n,x;
    cin>>n>>x;
    long long result=0;
    for(int i=1;i<=n;i++)
    {
        if(x%i==0)
        {
            if(i<=n && x/i<=n)
            {
                result++;
            }
        }
    }
    cout<<result<<endl;
    return 0;
}
 bool isPrime(long long n)
{
    if(n==1) return false;
    for(int i=2;i<=sqrt(n);i++)
    {
     }
}