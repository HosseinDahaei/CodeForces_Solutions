#include <iostream>
 using namespace std;
 int arr[1000000+100];
 int main()
{
    int n;
    cin>>n;
    char c;
    int one=0;
    scanf("%c",&c);
     for(int i=1;i<=n;i++)
    {
        scanf("%c",&c);
        if(c=='(') arr[i]=0;
        else       arr[i]=1;
        if(arr[i]) one++;
     }
    if(n!= 2*one)
    {
        cout<<-1<<endl;
        return 0;
    }
    one=0;
    int zero=0;
    int index=0;
    int res=0;
    while(index<n)
    {
        while(one<=zero && index<=n)
        {
            index++;
            if(arr[index]) one++;
            else           zero++;
        }
        if(index>=n) break;
        res++;
        while(one>zero  && index<=n)
        {
            index++;
            if(arr[index]) one++;
            else           zero++;
            res++;
        }
     }
    cout<<res<<endl;
     return 0;
}