#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    string  str;
    cin>>str;
    int n=str.size();
    int arr[1000000];
    for(int i=0;i<n;i++)
    {
        if(str[i]=='(')arr[i]=0;
        else arr[i]=1;
    }
    set<int> res;
    int r,l;
    l=0;
    r=n-1;
    while(arr[r]==0)r--;
    while(arr[l]==1) l++;
    while(r-l>0)
    {
        res.insert(r);
        res.insert(l);
        r--;
        l++;
        while(arr[r]==0)r--;
        while(arr[l]==1) l++;
    }
    if(res.size()==0)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<1<<endl;
        cout<<res.size()<<endl;
        for(auto u:res)
            cout<<u+1<<" ";
        cout<<endl;
    }
     return 0;
}