#include<bits/stdc++.h>
using namespace std;
map<char,bool>m;
int main()
{
    string a,b;
    cin>>a>>b;
    if(a.size()!=b.size())
    {
        cout<<"No";
        return 0;
    }
     m['a']=1;
    m['u']=1;
    m['e']=1;
    m['i']=1;
    m['o']=1;
    m['A']=1;
    m['U']=1;
    m['E']=1;
    m['I']=1;
    m['O']=1;
     for(int i=0;i<a.size();i++)
    {
        if(m[a[i]]!=m[b[i]])
        {
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
    return 0;
}