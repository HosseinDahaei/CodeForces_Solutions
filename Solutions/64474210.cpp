#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    int n,m;
    cin>>n>>m;
    int counter=0;
    int t=m/n;
    if(t<1 || m%n!=0)
    {
        cout<<-1<<endl;
        return 0;
    }
    while(t>1)
    {
        if(t%2==0)
        {
            counter++;
            t/=2;
        }
        else if(t%3==0)
        {
            counter++;
            t/=3;
        }
        else
        {
            cout<<-1<<endl;
            return 0;
        }
    }
    cout<<counter<<endl;
    return 0;
}