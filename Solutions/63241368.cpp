#include <bits/stdc++.h>
 using namespace std;
 int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
        cin>>a[i];
   sort(a,a+n);
   for(int i=0;i<n;i+=2){
    cout<<a[i]<<" ";
   }
   int s;
   if(n%2)
        s=n-2;
   else
        s=n-1;
   for(int i=s;i>=0;i-=2)
        cout<<a[i]<<" ";
    return 0;
}