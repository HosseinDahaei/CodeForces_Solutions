#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 int main()
{
    int t;
    cin>>t;
    string x,y;
    vector<int> result;
    for(int i=0;i<t;i++)
    {
        cin>>x>>y;
        int last1=0;
        for(int j=y.size()-1;j>=0;j--)
        {
            if(y[j]=='1') break;
            last1++;
        }
        int resultt = 0;
        for(int j=x.size()-1-last1;j>=0;j--)
        {
            if(x[j]=='1') break;
            resultt++;
        }
        result.push_back(resultt);
    }
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<endl;
    }
    return 0;
}