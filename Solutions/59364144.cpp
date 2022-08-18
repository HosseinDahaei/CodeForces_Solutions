#include <bits/stdc++.h>
 using namespace std;
int bmm(int a,int b);
int main()
{
    int a,b;
    cin>>a>>b;
    int bm=bmm(a,b);
    int result=0;
    while(a>bm)
    {
        int k=a/bm;
         if(k%2==0) a/=2;
        else if(k%3==0) a/=3;
        else if(k%5==0) a/=5;
        else
        {
            cout<<-1<<endl;
            return 0;
        }
        result++;
    }
    while(b>bm)
    {
        int k=b/bm;
        if(k%2==0) b/=2;
        else if(k%3==0) b/=3;
        else if(k%5==0) b/=5;
        else
        {
            cout<<-1<<endl;
            return 0;
        }
        result++;
    }
    cout<<result<<endl;
    return 0;
}
 int bmm(int a,int b)
{
    if(a>b)
    {
        int c=a;
        a=b;
        b=c;
    }
    if(a==1) return 1;
    if(a==0) return b;
    else return bmm(a,b-a);
}