#include<bits/stdc++.h>
 using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        int dist=a-b;
        dist=abs(dist);
        int sum=0;
         if(dist>=5)
        {
            sum+=dist/5;
            dist%=5;
        }
        if(dist>=2)
        {
            sum+=dist/2;
            dist%=2;
        }
        sum+=dist;
        cout<<sum<<endl;
    }
     return 0;
}