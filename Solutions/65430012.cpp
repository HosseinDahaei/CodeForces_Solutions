#include<bits/stdc++.h>
 using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int d=0;d<t;d++)
    {
        int n;
        cin>>n;
        int m;
        cin>>m;
        int a;
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a);
            sum+=a;
        }
        if(n!=m || n==2 || n==1)
        {
            cout<<-1<<endl;
            continue;
        }
        cout<<sum*2<<endl;
        for(int i=1;i<n;i++)
        {
            printf("%d %d\n",i,i+1);
        }
        printf("%d %d\n",n,1);
    }
    return 0;
}