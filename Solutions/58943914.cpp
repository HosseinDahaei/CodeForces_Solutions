#include <bits/stdc++.h>
 using namespace std;
vector<double> data;
void add(double a);
int main()
{
     int n,x,y;
    cin>>n>>x>>y;
    int xarr[n];
    int yarr[n];
    for(int i=0;i<n;i++)
    {
        int xx,yy;
        scanf("%d",&xx);
        scanf("%d",&yy);
        xarr[i]=xx-x;
        yarr[i]=yy-y;
    }
    /*cout<<" ----------------------------"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<xarr[i]<<" "<<yarr[i]<<endl;
    }
    cout<<"******************************"<<endl;*/
    bool havey0=false;
    for(int i=0;i<n;i++)
    {
        if(yarr[i]==0)
        {
            if(havey0==false)
            {
                havey0=true;
                data.push_back(99);
            }
        }
        else
            add((double)xarr[i]/(double)yarr[i]);
        //cout<<data.size()<<endl;
    }
    cout<<data.size()<<endl;
     return 0;
}
void add(double a)
{
    bool ok=true;
    for(int i=0;i<data.size();i++)
    {
        if(  abs(data[i]-a)<0.000000001  )
            ok=false;
    }
    if(ok)
        data.push_back(a);
}