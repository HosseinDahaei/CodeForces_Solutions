#include<bits/stdc++.h>
 using namespace std;
 int main()
{
    int n;
    cin>>n;
    vector<char> str;
    str.push_back('a');
    str.push_back('e');
    str.push_back('o');
    str.push_back('i');
    str.push_back('u');
     int a,b;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            a=max(i,n/i);
            b=min(i,n/i);
            if(a>=5 && b>=5)
                break;
        }
    }
    if(a<5 || b<5)
    {
        cout<<-1<<endl;
        return 0;
    }
    for(int i=0;i<b-5;i++)
    {
        str.push_back('k');
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<str.size();j++)
            cout<<str[(j+i)%str.size()];
        //cout<<endl;
    }
    cout<<endl;
    return 0;
}