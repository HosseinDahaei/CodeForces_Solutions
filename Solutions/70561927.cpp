#include<bits/stdc++.h>
using namespace std;
  int main()
{
    long long n,m;
    cin>>n>>m;
     long long mini=n-(long long)m*2;
    if(mini<0) mini=0;
       long long maxi;
    long long k=0;
    for(;k<n;k++)
    {
        if( ( (long long)k*(k-1) )/2 >= m) break;
    }
    maxi=n-k;
    cout<<mini<<" "<<maxi<<endl;
    return 0;
 }
               