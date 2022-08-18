#include <iostream>
 using namespace std;
 int main()
{
    int n;
    cin>>n;
    int val=0;
    int a;
    cin>>a;
    while(a%2==0 || a%3==0)
    {
        if(a%2==0)
            a/=2;
        else
            a/=3;
    }
    val=a;
    bool ok=true;
    for(int i=1;i<n;i++)
    {
       cin>>a;
        while(a%2==0 || a%3==0)
        {
            if(a%2==0)
                a/=2;
            else
                a/=3;
        }
        if(a!=val) ok=false;
     }
    if(ok)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}