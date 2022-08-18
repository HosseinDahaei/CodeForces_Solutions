#include <bits/stdc++.h>
 using namespace std;
map<char,int> repeat;
void test()
{
    //cout<<" test ---"<<endl;
    int n,k;
    repeat.clear();
    cin>>n>>k;
    char str[2*100000+10];
     scanf("%c",&str[0]);
    for(int i=0;i<n;i++)
    {
        scanf("%c",&str[i]);
    }
    int res=0;
    int m=n/k;
    swap(m,k);
    for(int i=0;i<m/2;i++)
    {
        //cout<<"i = "<<i<<endl;
        repeat.clear();
        for(int j=0;j<k;j++)
        {
            repeat[str[i+m*j]]++;
            repeat[str[m-1-i+m*j]]++;
            //cout<<str[i+m*j]<<" ";
            //cout<<str[m-i-1+m*j]<<" ";
        }
        //cout<<endl;
        int maxi=-1;
        for(auto u:repeat)
        {
            maxi=max(maxi,u.second);
        }
        res+=k*2- maxi;
     }
    if(m%2==1)
    {
        repeat.clear();
        int i=m/2;
        for(int j=0;j<k;j++)
        {
            repeat[str[i+m*j]]++;
            //cout<<str[i+m*j]<<" ";
        }
        //cout<<endl;
        int maxi=-1;
        for(auto u:repeat)
        {
            maxi=max(maxi,u.second);
        }
        res+=k- maxi;
    }
    cout<<res<<endl;
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