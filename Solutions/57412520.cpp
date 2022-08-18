#include <iostream>
 using namespace std;
 int main()
{
    int h,w;
    cin>>h>>w;
    int sum=h+w;
    long long result=1;
    for(int i=0;i<sum;i++)
    {
        result*=2;
        result%=998244353;
    }
    cout<<result<<endl;
    return 0;
}