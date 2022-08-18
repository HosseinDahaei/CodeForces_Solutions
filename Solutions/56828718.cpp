#include <iostream>
 using namespace std;
 int main()
{
    int n;
    cin>>n;
    int x,y;
    int result=0;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        if(x+y>result) result=x+y;
    }
    cout<<result<<endl;
    return 0;
}