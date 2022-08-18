#include <iostream>
#include<queue>
#include<stdio.h>
using namespace std;
 int main()
{
    int n;
    cin>>n;
    int a;
    queue <int> str,result;
    int zero=0;
    int one=0;
    for(int i=0;i<n;i++)
    {
        scanf("%1d",&a);
        if(a==0) zero++;
        else one++;
        str.push(a);
    }
    if(zero!=one)
    {
        cout<<1<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<str.front();
            str.pop();
        }
        cout<<endl;
    }
    else
    {
        cout<<2<<endl;
        cout<<str.front()<<" ";
        str.pop();
        for(int i=0;i<n-1;i++)
        {
            cout<<str.front();
            str.pop();
        }
        cout<<endl;
    }
      /*int resultNumber=1;
    while(zero==one)
    {
     }
      cout<<resultNumber<<endl;
     for(int i=0;i<result.size();i++)
     {
         if(result.front()==-1)
         {
             cout<<" ";
         }
         else
         {
             cout<<result.front();
         }
         result.pop();
      }
     for(int i=0;i<n;i++)
     {
         cout<<str.front();
         str.pop();
     }
     cout<<endl;*/
    return 0;
}