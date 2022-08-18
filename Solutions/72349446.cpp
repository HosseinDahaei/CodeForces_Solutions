#include <bits/stdc++.h>
 using namespace std;
 set<int> nei[2000];
set<int> possible;
int main()
{
    int n;
    cin>>n;
     for(int i=0;i<n-1;i++)
    {
        int a,b;
        cin>>a>>b;
        nei[a].insert(b);
        nei[b].insert(a);
    }
    for(int i=1;i<=n;i++)
    {
        if(nei[i].size()==1)
            possible.insert(i);
    }
    /*for(auto i:possible)
        cout<<i<<endl;*/
    while(possible.size()>1)
    {
        if(possible.size()==1)
        {
            cout<<"! "<<(int)*possible.begin()<<endl;
            //cout.flush();
            return 0;
        }
        int a,b;
        a=(int)*possible.begin();
        possible.erase(a);
         b=(int)*possible.begin();
        possible.erase(b);
        cout<<"? "<<a<<" "<<b<<endl;
        //cout.flush();
        int res;
        cin>>res;
        if(res==a || res==b)
        {
            cout<<"! "<<res<<endl;
            //cout.flush();
            return 0;
        }
        int f1=(int)*(nei[a].begin());
        int f2=(int)*(nei[b].begin());
        nei[f1].erase(a);
        nei[f2].erase(b);
           if(nei[f1].size()<2)possible.insert(f1);
         if(nei[f2].size()<2)possible.insert(f2);
     }
    cout<<"! "<<(int)*possible.begin()<<endl;
    //cout.flush();
    return 0;
}