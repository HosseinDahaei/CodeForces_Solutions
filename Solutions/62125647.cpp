#include <bits/stdc++.h>
 using namespace std;
bool isprime(long long n);
int main()
{
    int n;
    cin>>n;
    long long  arr[n];
    long long brr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i]>>brr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(isprime(arr[i]-brr[i]))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
bool isprime(long long n)
{
     if(n==1) return false;
     return true;
 }