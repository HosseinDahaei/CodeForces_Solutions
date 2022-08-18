#include <bits/stdc++.h>
 using namespace std;
 void test()
{
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
     sort(arr,arr+n);
    if(arr[n-1]<x)
    {
        cout<<0<<endl;
        return ;
    }
    double sum=arr[n-1];
    int counter=1;
    for(int i=n-2;i>=0;i--)
    {
        if( (double)(sum+arr[i])/(counter+1)>=x)
        {
            counter++;
            sum+=arr[i];
        }
        else
            break;
    }
    cout<<counter<<endl;;
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