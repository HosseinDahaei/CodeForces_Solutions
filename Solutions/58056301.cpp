#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int withoutzero(int n);
int main()
{
     int a,b;
    cin>>a>>b;
    int c=a+b;
    //cout<<a<<" + "<<b<<" = "<<c<<endl;
    //cout<<withoutzero(a)<<" + "<<withoutzero(b)<<" = "<<withoutzero(c)<<endl;
    if(withoutzero(a)+withoutzero(b)==withoutzero(c))
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
 int withoutzero(int n)
{
    int a=0;
    int i=0;
    while(n>0)
    {
        if(n%10 >0)
        {
            a=a+(n%10)* round(pow(10,i));
            i++;
        }
        n=n/10;
     }
    return a;
}