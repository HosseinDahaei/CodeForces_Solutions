#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    vector<int> data;
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        int temp;
        bool flag=true;
        scanf("%d",&temp);
        for(int j=0;j<data.size();j++)
            if(data[j]==temp)
                flag=false;
        if(flag)
            data.push_back(temp);
        if(data.size()>k)
            data.erase(data.begin());
    }
    cout<<data.size()<<endl;
    for(int i=data.size()-1;i>-1;i--)
    {
        printf("%d ",data[i]);
    }
    return 0;
}