#include <iostream>
using namespace std;
 int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b;
        cin>>a>>b;
        if(b%a==0) cout<<(b/a)*(b/a)*a<<endl;
        else
        {
            int sum=0;
            for(int i=0;i<b%a;i++)
                sum+=(b/a+1)*(b/a+1);
            for(int i=0;i<a-b%a;i++)
                sum+=(b/a)*(b/a);
            cout<<sum<<endl;
        }
     }
    return 0;
}