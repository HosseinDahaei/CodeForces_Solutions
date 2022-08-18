#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    int r,x,y,x2,y2;
    cin>>r>>x>>y>>x2>>y2;
    double distance=sqrt( (long long)(x-x2)*(x-x2)+(long long)(y-y2)*(y-y2) );
    int result=0;
    //printf("%f\n",distance);
    if(distance==(int)distance)
    {
        if((int)distance%(2*r)==0)
        {
            cout<<distance/(2*r)<<endl;
            return 0;
        }
    }
    while(distance>0)
    {
        distance-=2*r;
        result++;
    }
    //result+=2;
    cout<<result<<endl;
    return 0;
}