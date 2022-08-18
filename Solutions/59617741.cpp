#include <iostream>
 using namespace std;
 int main()
{
    int n,w;
    cin>>n>>w;
    int mini;
    int maxi;
    long long sum=0;
    cin>>sum;
    mini=sum;
    maxi=sum;
    for(int i=1;i<n;i++)
    {
        int val;
        cin>>val;
        sum+=val;
        if(sum<mini)
            mini=sum;
        if(sum>maxi)
            maxi=sum;
     }
    if(mini>0)
        mini=0;
    if(maxi<0)
        maxi=0;
    int result=w-maxi+mini+1;
    result= max(result,0);
    cout<<result<<endl;
      return 0;
}