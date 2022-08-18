#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n);
 int main()
{
    int n;
    cin>>n;
    int first=2;
    for(first=4;first<n;first++)
    {
        if(isPrime(first)) continue;
        if(isPrime(n-first)) continue;
        cout<<first<<" "<<n-first<<endl;
        return 0;
    }
     return 0;
}
 bool isPrime(int n)
{
     for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) return false;
    }
    return true;
}