#include <bits/stdc++.h>
 using namespace std;
int func(int arr[],int start,int endd);
 int main()
{
    int n;
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    sort(arr,arr+n);
    int maxnum=0;
    /*for(int i=0;i<n;i++)
    {
             int k=func(arr,i,n-1);
            if(k>maxnum)
                maxnum=k;
     }*/
    cout<<func(arr,0,n-1)<<endl;
    return 0;
}
int func(int arr[],int start,int endd)
{
    long long sum=0;
    int counter=0;
    for(int i=start;i<=endd;i++)
    {
        if(arr[i]>=sum)
        {
            counter++;
            sum+=arr[i];
        }
     }
    return counter;
}