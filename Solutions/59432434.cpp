#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    int n;
    cin>>n;
    vector<int> first,second;
    int k;
    cin>>k;
    for(int i=0;i<k;i++)
    {
        int a;
        cin>>a;
        first.push_back(a);
    }
    cin>>k;
    for(int i=0;i<k;i++)
    {
        int a;
        cin>>a;
        second.push_back(a);
    }
    int counter=0;
    while(first.empty()==false && second.empty()==false)
    {
        if(counter>1000)
        {
            cout<<-1<<endl;
            return 0;
        }
        if(first[0]>second[0])
        {
            first.push_back(second[0]);
            first.push_back(first[0]);
            first.erase(first.begin());
            second.erase(second.begin());
        }
        else
        {
            second.push_back(first[0]);
            second.push_back(second[0]);
            first.erase(first.begin());
            second.erase(second.begin());
        }
        counter++;
    }
    cout<<counter<<" ";
    if(second.size()!=0) cout<<2<<endl;
    else cout<<1<<endl;
    return 0;
}