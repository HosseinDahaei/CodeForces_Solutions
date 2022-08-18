#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    int n,m;
    cin>>n>>m;
    int arr[200][200];
    for(int i=0;i<200;i++)
        for(int j=0;j<200;j++)
            arr[i][j]=-2;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            char c;
            scanf("%c",&c);
            if(c=='-')
                arr[i][j]=-1;
            else if(c=='\n' && i<n)
                j--;
        }
        //cout<<i<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
             if(arr[i][j]==-1)
                printf("-");
            else if((i+j)%2==0)
                printf("B");
            else printf("W");
         }
        cout<<endl;
    }
    return 0;
}