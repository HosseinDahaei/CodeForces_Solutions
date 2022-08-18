#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    string str;
    int n;
    cin>>n;
    int a;
    vector<int> even,odd;
    long long sum=0;
    for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a%2==0)
                even.push_back(a);
            else
                odd.push_back(a);
            sum+=a;
        }
    sort(odd.begin(),odd.end());
    sort(even.begin(),even.end());
     long long sum1=0;
    long long sum2=0;
    if(even.size()==odd.size() || even.size()==odd.size()+1 || even.size()==odd.size()-1)
    {
        cout<<0<<endl;
        return 0;
    }
    if(even.size()<odd.size())
    {
        for(int i=0;i<odd.size()-even.size()-1;i++)
        {
            sum1+=odd[i];
        }
        cout<<sum1<<endl;
    }
    else/// even>odd
    {
        for(int i=0;i<even.size()-odd.size()-1;i++)
        {
            sum2+=even[i];
        }
        cout<<sum2<<endl;
    }
    return 0;
}