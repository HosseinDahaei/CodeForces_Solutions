#include <iostream>
 using namespace std;
int remainder(int a,int val);
 int main()
{
    int x,y;
    int n;
    cin>>x>>y;
    cin>>n;
    int val=1000000007;
    int z;
    if(n==1)
    {
        cout<<remainder(x,val)<<endl;
        return 0;
    }
    if(n==2)
    {
        cout<<remainder(y,val)<<endl;
        return 0;
    }
    z=y-x;
    int result;
    if(n%6==1)
    {
        result=x;
    }
    if(n%6==2)
    {
        result=y;
    }
    if(n%6==3)
    {
        result=z;
    }
    if(n%6==4)
    {
        result=-x;
    }
    if(n%6==5)
    {
        result=-y;
    }
    if(n%6==0)
    {
        result=-z;
    }
    //cout<<result<<endl;
    cout<<remainder(result,val)<<endl;
     return 0;
}
 int remainder(int a,int val)
{
    if(a<0)
    {
        a=-a;
        a=a%val;
        a=-a;
        return (val+a)%val;
    }
    else
        return a%val;
}