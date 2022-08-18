#include <iostream>
 using namespace std;
 int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int* log=new int[n+1];
    for(int i=0;i<n+1;i++)
        log[i]=0;
     if(n-a>=0)
        log[n-a]=1;
    if(n-b>=0)
        log[n-b]=1;
    if(n-c>=0)
        log[n-c]=1;
    int minn=min(min(a,b),c);
    for(int i=n-1;i>=0;i--)
    {
        if(i+a<=n)
        {
            if(log[i+a]!=0)
                log[i]=max(log[i],log[i+a]+1);
        }
        if(i+b<=n)
        {
            if(log[i+b]!=0)
                log[i]=max(log[i],log[i+b]+1);
         }
        if(i+c<=n)
        {
            if(log[i+c]!=0)
                log[i]=max(log[i],log[i+c]+1);
         }
    }
    // show log
    /*for(int i=0;i<=n;i++)
    {
        cout<<log[i]<<",";
    }
    cout<<endl;*/
    cout<<log[0]<<endl;
     return 0;
}