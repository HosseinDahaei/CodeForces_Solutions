#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    int n;
    cin>>n;
    multiset<int> data,data2,data3;
    int a;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        data.insert(a);
    }
    for(int i=0;i<n-1;i++)
    {
        scanf("%d",&a);
        data2.insert(a);
    }
    for(int i=0;i<n-2;i++)
    {
        scanf("%d",&a);
        data3.insert(a);
    }
    set<int> :: iterator it=data.begin();
    set<int> :: iterator it2=data2.begin();
    for(;it2!=data2.end();it++,it2++)
    {
        if(*it!=*it2)
            break;
    }
     cout<<*it<<endl;
    it=data2.begin();
    it2=data3.begin();
    for(;it!=data.end();it++,it2++)
    {
        if(*it!=*it2)
            break;
    }
    cout<<*it<<endl;
    return 0;
}