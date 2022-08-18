#include<bits/stdc++.h>
using namespace std;
 int x,y,z;
 int main()
{
    int a,b,c;
    cin>>a>>b>>c;
     while(c>0)
    {
        if(a>b)
        {
            c--;
            a--;
            z++;
        }
        else
        {
            c--;
            b--;
            y++;
        }
    }
    if(b<0 || a<0)
    {
        cout<<"Impossible"<<endl;
        return 0;
    }
    if(a==b)
    {
        x+=a;
     }
    else
    {
        cout<<"Impossible"<<endl;
        return 0;
    }
      cout<<x<<" "<<y<<" "<<z<<endl;
    return 0;
}
              