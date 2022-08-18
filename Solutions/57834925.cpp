#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    int n;
    cin>>n;
    int askill[102]={0};
    for(int i=1;i<=n;i++)
    {
        int k;
        cin>>k;
        askill[k]+=1;
    }
    int m;
    cin>>m;
    int bskill[102]={0};
    for(int i=1;i<=m;i++)
    {
        int k;
        cin>>k;
        bskill[k]+=1;
    }
    int result=0;
    for(int i=1;i<=100;i++)
    {
        if(askill[i]>=1)
        {
            if(bskill[i-1]>=1)
            {
                askill[i]-=1;
                bskill[i-1]-=1;
                result++;
                i--;
                continue;
            }
            if(bskill[i]>=1 && askill[i]>=1)
            {
                askill[i]-=1;
                bskill[i]-=1;
                result++;
                i--;
                continue;
            }
            if(bskill[i+1]>=1 && askill[i]>=1)
            {
                askill[i]-=1;
                bskill[i+1]-=1;
                result++;
                i--;
                continue;
            }
         }
    //cout<<"i="<<i<<" result="<<result<<endl;
    }
    cout<<result<<endl;
      return 0;
}