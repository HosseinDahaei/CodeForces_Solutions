#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    int n;
    cin>>n;
    int k;
    long long int sum=0;
    bool havegood=false;
    int negativecounter=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&k);
        if(k==0)
        {
            //cout<<"0"<<endl;
            havegood=true;
            sum++;
        }
        else if(k>0)
        {
            //cout<<"pos"<<endl;
            sum+=k-1;
        }
        else// k<0
        {
            //cout<<"neg"<<endl;
            sum=sum-k-1;
            negativecounter++;
        }
    }
    if(negativecounter%2==0)
    {
     }
    else
    {
        if(havegood)
        {
         }
        else
            sum+=2;
    }
    cout<<sum<<endl;
    return 0;
}