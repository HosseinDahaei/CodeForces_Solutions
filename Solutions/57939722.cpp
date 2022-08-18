#include <iostream>
 using namespace std;
 int main()
{
    int n;
    cin>>n;
    bool isleaf[n+1];
    fill(isleaf,isleaf+n+1,true);
    int input[n+1]={0};
     for(int i=2;i<=n;i++)
    {
        int a;
        cin>>a;
        input[i]=a;
        isleaf[a]=false;
    }
     int brr[n+1]={0};
    for(int i=2;i<=n;i++)
    {
        if(isleaf[i]==true) brr[input[i]]++;
    }
    bool ok=true;
     for(int i=1;i<=n;i++)
    {
         if(brr[i]<3 && isleaf[i]==false)
            ok=false;
    }
    /*for(int i=1;i<=n;i++)
        cout<<isleaf[i]<<",";
    cout<<endl;
    for(int i=1;i<=n;i++)
        cout<<brr[i]<<",";
    cout<<endl;*/
    if(ok)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}