#include <iostream>
 using namespace std;
 int main()
{
    int n;
    cin>>n;
    int arr[n];
    int minn=10000;
    int maxx=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>maxx)
            maxx=arr[i];
        if(arr[i]<minn)
            minn=arr[i];
    }
    int d=maxx-minn;
    bool ok=true;
    for(int i =0;i<n;i++)
    {
        if(d%2==0)
        {
            if(arr[i]-minn!=0 && arr[i]-minn!=maxx-minn && arr[i]-minn!=d/2)
                ok=false;
        }
        else
        {
            if(arr[i]-minn!=0 && arr[i]-minn!=maxx-minn )
                ok=false;
        }
    }
    if(ok)
        if(d%2==1)
            cout<<d<<endl;
        else
            cout<<d/2<<endl;
    else
        cout<<-1<<endl;
    return 0;
}