#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int h=0;h<t;h++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
        int brr[n];
        set<int> data;
        vector<int> up,down;
        bool flag=false;
        for(int i=0;i<n;i++)
            {
                int alaki;
                scanf("%d",&alaki);
                 brr[i]=arr[i]-alaki;
                if(brr[i]>0) flag=true;
                data.insert(brr[i]);
                if(i>0)
                {
                    if(abs(brr[i])>abs(brr[i-1]))
                        up.push_back(i);
                    if(abs(brr[i])<abs(brr[i-1]))
                        down.push_back(i);
                }
            }
        /*cout<<"----------"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<brr[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<down.size();i++)
        {
            cout<<down[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<up.size();i++)
        {
            cout<<up[i]<<" ";
        }
        cout<<endl;*/
        if(data.size()>2 || down.size()>1 || up.size()>1 || flag)
            {
                cout<<"NO"<<endl;
                continue;
            }
        if(data.size()==1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        if(data.count(0)==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(down.size()+up.size()<2)
        {
            cout<<"YES"<<endl;
            continue;
        }
        if(down[0]>up[0])
        {
            cout<<"YES"<<endl;
          }
        else
        {
            cout<<"NO"<<endl;
        }
     }
     return 0;
}