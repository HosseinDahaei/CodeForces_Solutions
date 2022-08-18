#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<"1\n1"<<endl;
        return 0;
    }
    if(n==2)
    {
        cout<<"1\n1 1"<<endl;
        return 0;
    }
    bool a[n+100];
    fill(a,a+n+100,true);
    for(int i=2;i<n+2;i++)
    {
        if(a[i])
        {
            int ind=i*2;
            while(ind<=n+1){
                 a[ind]=false;
                ind+=i;
            }
        }
     }
    cout<<"2"<<endl;
    for(int i=2;i<=n+1;i++)
    {
        if(a[i])
            cout<<"1"<<" ";
        else
            cout<<"2 ";
     }
    cout<<endl;
    return 0;
}