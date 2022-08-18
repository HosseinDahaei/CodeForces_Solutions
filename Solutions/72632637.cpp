#include <bits/stdc++.h>
 using namespace std;
int arr[10000];
void func()
{
    int n;
    cin>>n;
    int even=0;
    int odd=0;
     for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(n==1 && arr[0]%2)cout<<-1<<endl;
    else
    {
        if(arr[0]%2==0)
        {
            cout<<1<<endl;
            cout<<1<<endl;
        }
        else if(arr[1]%2==0)
        {
            cout<<1<<endl;
            cout<<2<<endl;
         }
        else
        {
            cout<<2<<endl;
            cout<<"1 2"<<endl;
        }
    }
    return ;
}
 int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        func();
    }
    return 0;
}