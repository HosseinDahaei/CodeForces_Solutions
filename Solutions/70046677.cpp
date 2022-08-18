#include<bits/stdc++.h>
using namespace std;
 #define ll long long
    void mytest()
{
    int n;
    cin>>n;
    int counter=0;
    int a[2];
    for(int i=0;i<n;i++)
    {
        int b;
        scanf("%1d",&b);
        if(counter<2 && b%2==1)
        {
            a[counter]=b;
            counter++;
        }
      }
    if(counter<2) cout<<-1<<endl;
    else cout<<a[0]<<a[1]<<endl;
   }
    int main()
{
    int t;
    cin>>t;
    while(t--){
        mytest();
        cout<<endl;
    }
    return 0;
 }
               