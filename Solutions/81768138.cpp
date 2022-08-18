#include <bits/stdc++.h>
 using namespace std;
 void test()
{
   int h,c,t;
   cin>>h>>c>>t;
   if(t>=h)
    {
        cout<<1<<endl;
        return ;
    }
    if(t<=c)
    {
        cout<<2<<endl;
        return ;
    }
    double mid=(double)(h+c)/2.0;
    if(t<=mid)
    {
        cout<<2<<endl;
        return ;
    }
    double dist=h-t;
    int x=(h-t)/(2*t-2*mid);
    //cout<<"x "<<x<<endl;
    x-=10;
    x=max(1,x);
    while( abs( ((double)(h+2*x*mid) )/(2*x+1) -t)<dist )
    {
        //cout<<dist<<endl;
        dist=((double)(h+2*x*mid) )/(2*x+1)-t;
        x++;
     }
    x--;
    cout<<2*x+1<<endl;
}
 int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        test();
    }
    return 0;
}