#include <bits/stdc++.h>
 using namespace std;
  int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        int a,b,c;
        cin>>n;
        int j=2;
        while( j<= n )
        {
            if(n%j==0) break;
            j++;
            if(j>sqrt(n)+5)
                j=n;
        }
        if(j==n)
        {
            cout<<"NO"<<endl;
            continue;
        }
        a=j;
        n/=j;
        j++;
        while(j<=n)
        {
            if(n%j==0) break;
            j++;
            if(j>sqrt(n)+5)
                j=n;
        }
         if(j>=n)
        {
            cout<<"NO"<<endl;
            continue;
        }
        b=j;
        c=n/j;
        if(c== a || c==b)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    return 0;
}
 