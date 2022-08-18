#include <bits/stdc++.h>
 using namespace std;
 int arr[1000+100][1100];
 void test()
{
    for(int i=0;i<1100;i++)
        for(int j=0;j<1100;j++)
            arr[i][j]=0;
    int n,m,x,y;
    scanf("%d%d%d%d",&n,&m,&x,&y);
    int cells=0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        {
            char c;
            scanf("%c",&c);
            if(c=='\n')
                j--;
            if(c=='.')
                {
                    arr[i][j]=1;
                    cells++;
                }
        }
    int res=0;
    if(y>=2*x)
        cout<<x*cells<<endl;
    else
    {
        for(int i=1;i<=n;i++)
        {
            int ones=0;
            for(int j=1;j<=m+1;j++)
            {
                if(arr[i][j]==1)
                    ones++;
                else
                {
                    res+=(ones/2) *y+(ones%2)*x;
                    ones=0;
                }
            }
        }
        cout<<res<<endl;
    }
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