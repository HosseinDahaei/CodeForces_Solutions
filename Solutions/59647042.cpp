#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    int n;
    cin>>n;
    int canopen[1001];
    fill(canopen,canopen+1001,0);
    int have[1001];
    fill(have,have+1001,0);
    int exeption[1001];
    fill(exeption,exeption+1001,0);
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        if(a!=b)
        {
            canopen[b]=1;
            have[a]++;
            have[b]+=exeption[b];
            exeption[b]=0;
        }
        else
        {
            if(canopen[a]==1)
            {
                have[a]++;
                have[a]+=exeption[a];
                exeption[a]=0;
            }
            else
            {
                exeption[a]++;
                canopen[a]=1;
             }
        }
    }
    int result=0;
    for(int i=0;i<1001;i++)
    {
        if(canopen[i]==1)
        {
            result+=have[i];
        }
    }
    cout<<n-result<<endl;
    return 0;
}
 