#include<bits/stdc++.h>
using namespace std;
 int main()
{
    int x1,y1,x2,y2;
    cin>>x1>>y1;
    cin>>x2>>y2;
    if(x1==x2)
    {
        cout<<4+2*abs(y1-y2)+2<<endl;
    }
    else if(y1==y2)
    {
        cout<<2*abs(x1-x2)+2+4<<endl;
    }
    else
    {
        cout<<2*abs(x1-x2)+2+2*abs(y1-y2)+2<<endl;
    }
     return 0;
}