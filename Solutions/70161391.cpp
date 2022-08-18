#include<bits/stdc++.h>
using namespace std;
 #define ll long long
void test()
{
    int n,d;
    cin>>n>>d;
    int x=sqrt(d);
    x-=10;
    x=max(x,0);
    while(x<sqrt(d)+21)
    {
        if(x+ceil((double)d/(x+1))<=n)
        {
            cout<<"YES"<<endl;
            return;
        }
        x++;
    }
    cout<<"NO"<<endl;
 }
  int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
      test();
    }
}
               