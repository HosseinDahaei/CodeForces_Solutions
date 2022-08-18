#include <bits/stdc++.h>
using namespace std;
 int main()
{
    int n;
    cin>>n;
    int d;
    d=n/2+1;
    //int* arr=new int[d];
    cout<<d<<endl;
    int x=1;
    int y=1;
    for(int i=1;i<=n;i++)
    {
        cout<<x<<" "<<y<<endl;
        if(i%2==1)
            y+=1;
        else
            x+=1;
    }
       return 0;
}