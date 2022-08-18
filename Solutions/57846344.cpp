#include <bits/stdc++.h>
 using namespace std;
int bs(int arr[],int maxx,int minn,int n,int value);
 int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);
    /*for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;*/
    int q;
    cin>>q;
    vector<int> result;
    for(int i=0;i<q;i++)
    {
        long long k;
        scanf("%I64d",&k);
        result.push_back(bs(arr,n,0,n,k)+1);
        //cout<<" = "<<result.back()<<endl;
    }
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<endl;
    }
    return 0;
}
 int bs(int arr[],int maxx,int minn,int n,int value)
{
     int midd=(maxx-minn)/2+ minn;
    if(midd==0 && arr[0]> value)
        return -1;
     //cout<<"mid = "<<midd<<" min="<<minn<<" max="<<maxx<<endl;
    if(arr[midd]> value)
    {
        return bs(arr,midd,minn,n,value);
    }
    if(value == arr[midd])
    {
        if(arr[midd+1]>value)
            return midd;
        else
        {
            while(arr[midd+1]==value && midd<n)
                midd++;
            return midd;
        }
    }
    else// value > arr[midd]
    {
        if(arr[midd+1]>value || midd==n-1)
            return midd;
        else
        {
            return bs(arr,maxx,midd,n,value);
        }
    }
 }
 