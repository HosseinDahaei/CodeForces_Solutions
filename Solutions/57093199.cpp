#include<bits/stdc++.h>
using namespace std;
 int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    y*=-1;
    if(abs(x+y)>z || z==0)
    {
        if(x+y>0)
            cout<<"+"<<endl;
        else if(x+y==0)
            cout<<"0"<<endl;
        else
            cout<<"-"<<endl;
    }
    else
        cout<<"?"<<endl;
    return 0;
}