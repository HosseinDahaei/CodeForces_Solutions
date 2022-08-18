#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    int n,v;
    cin>>n>>v;
    int arr[3010];
    fill(arr,arr+3010,0);
    for(int i=0;i<n;i++)
    {
        int a,b;
        //cin>>a>>b;
        scanf("%d %d",&a ,&b);
        arr[a]+=b;
        //cout<<"arr[2]="<<arr[2]<<endl;
    }
    int sum =0;
    /*for(int i=0;i<n+5;i++)
        cout<<arr[i]<<" ";
    cout<<endl;*/
    for(int i=1;i<3002;i++)
    {
        int today=v;
        today-=arr[i-1];
        if(today<=0)
        {
            sum+=v;
            continue;
        }
        if(today>=arr[i])
        {
            today-=arr[i];
            sum+=v-today;
            arr[i]=0;
        }
        else
        {
            arr[i]-=today;
            sum+=v;
        }
        //cout<<sum<<endl;
    }
    cout<<sum<<endl;
     return 0;
}