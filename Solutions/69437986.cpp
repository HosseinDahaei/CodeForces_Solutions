#include <bits/stdc++.h>
 using namespace std;
  int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        pair<int,int> data[n];
        for(int j=0;j<n;j++)
        {
            int a,b;
            cin>>a>>b;
            data[j]=make_pair(a,b);
        }
        sort(data,data+n);
        bool ok=true;
        for(int j=0;j<n-1;j++)
        {
            if(data[j].second>data[j+1].second) ok=false;
        }
        if(ok)
        {
            cout<<"YES"<<endl;
            int x=0;
            int y=0;
            for(int j=0;j<n;j++)
            {
                for(int k=x;k<data[j].first;k++)
                    cout<<"R";
                x=data[j].first;
                for(int k=y;k<data[j].second;k++)
                    cout<<"U";
                y=data[j].second;
            }
            cout<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}