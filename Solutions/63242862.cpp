#include <iostream>
 using namespace std;
 int main()
{
    int n,k;
    cin>>n>>k;
    long long minn;
    long long t=n%k;
    long long r=n/k;
    minn = (long long)(k-t)*(r*(r-1))/2;
    minn += (long long)t*(r*(r+1))/2;
    long long maxx=((long long)(n-k+1)*(n-k))/2;
     if(k==1)
    {
        minn = maxx;
    }
    cout<<minn<<" ";
    cout<<maxx<<endl;
    return 0;
}