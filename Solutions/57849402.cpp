#include <iostream>
 using namespace std;
 int main()
{
    long long n,m;
    cin>>n>>m;
    if(n==1)
    {
        cout<<n<<endl;
        return 0;
    }
     if(m<=n/2)
    {
        cout<<m+1;
    }
    else
        cout<<m-1<<endl;
    return 0;
}