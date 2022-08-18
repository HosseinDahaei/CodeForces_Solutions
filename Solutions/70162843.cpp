#include<bits/stdc++.h>
using namespace std;
 #define ll long long
void test()
{
}
  int main()
{
    int n;
    cin>>n;
    map<string,int> data;
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        if(data.count(str)==0)
        {
            cout<<"OK"<<endl;
            data.insert({str,0});
        }
        else
        {
            cout<<str<<data[str]+1<<endl;
            data[str]+=1;
        }
    }
}
               