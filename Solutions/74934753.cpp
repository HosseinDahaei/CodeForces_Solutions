#include <iostream>
 using namespace std;
 void test()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int x,y,x1,y1,x2,y2;
    cin>>x>>y>>x1>>y1>>x2>>y2;
    if(x==x1 && x==x2 && a+b>0)
    {
        cout<<"No"<<endl;
        return ;
    }
    if(y==y1 && y==y2 && c+d>0)
    {
        cout<<"No"<<endl;
        return ;
    }
     if(b-a<=x2-x && a-b<=x-x1 && c-d<=y-y1 && d-c<=y2-y)
    {
        cout<<"Yes"<<endl;
     }
    else
        cout<<"No"<<endl;
}
  int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        test();
    }
    return 0;
}