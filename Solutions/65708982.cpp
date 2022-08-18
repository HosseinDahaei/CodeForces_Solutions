#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <vector>
#include <queue>
#include <iostream>
#include <iterator>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <sstream>
#include <fstream>
#include <ctime>
#include <cstring>
#include <stack>
#include <ctime>
#include <iomanip>
#include <bitset>
#define MOD 1000000007
using namespace std;
typedef long long ll;
#define gcd __gcd
 int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    if(n%2==0)
    {
     while(n%2==0) n/=2;
     if(n==1)
     {
      cout<<2;
      return 0;
  }
  else
  {
   cout<<1;
   return 0;
  }
 }
    for(ll i=3; i*i<=n; i+=2)
    {
     if(n%i==0)
     {
      while(n%i==0) n/=i;
   if(n==1)
   {
    cout<<i;
    return 0;
   }
   else
   {
    cout<<1;
    return 0;
   }
  }
 }
 cout<<n;
}