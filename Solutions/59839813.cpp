#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    double n;
    cin>>n;
    int t;
    cin>>t;
    double one=1.000000011;
    double ten=1;
    for(int i=0;i<1000;i++)
        ten*=one;
    while(t>0)
    {
        if(t>1000)
        {
            n=n*ten;
            t-=1000;
        }
        else
        {
            n*=one;
            t--;
        }
    }
    printf("%8f",n);
    return 0;
}