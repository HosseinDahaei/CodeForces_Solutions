#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    int t;
    cin>>t;
    vector<int> results;
    int b,p,f;
    int h,c;
    for(int i=0;i<t;i++)
    {
        int k=0;
        cin>>b>>p>>f;
        cin>>h>>c;
        b= b/2;
        if(h>c)
        {
            k = k + min(b,p)*h;
            b = b- min(b,p);
            k = k+ min(b,f)*c;
        }
        else
        {
            k = k + min(b,f)*c;
            b = b- min(b,f);
            k = k+ min(b,p)*h;
        }
        results.push_back(k);
    }
    for(int i=0;i<results.size();i++)
        cout<<results[i]<<endl;
    return 0;
}