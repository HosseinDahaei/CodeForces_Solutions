#include <bits/stdc++.h>
 using namespace std;
vector<bool> arr2;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> data;
    set<int> dt;
    for(int i=0;i<n;i++)
    {
        int al;
        scanf("%d",&al);
        if(dt.count(al)==0)
        {
            if(dt.size()==k)
            {
                dt.erase(data.front());
                data.erase(data.begin());
                data.push_back(al);
                dt.insert(al);
            }
            else
            {
                data.push_back(al);
                dt.insert(al);
            }
        }
        else
        {
            /// do nothing
        }
    }
    printf("%d\n",data.size());
    for(int j=data.size()-1;j>=0;j--)
    {
        printf("%d ",data[j]);
    }
    return 0;
}