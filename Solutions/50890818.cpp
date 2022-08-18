#include <iostream>
#include<algorithm>
using namespace std;
int searchit(int arr[],int n,int val);
int saveus(int arr[],int n,int k);
int main()
{
    // get inputs
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // sort it
    sort(arr,arr+n);
     int mini=arr[0]+arr[n/2]-1;
    int maxi=arr[n-1]+arr[n/2]+1;
    int result=0;
    for(int i=mini;i<=maxi;i++)
    {
        int alaki=saveus(arr,n,i);
        //cout<<"alaki="<<alaki<<endl;
        if(alaki>result)
            result=alaki;
    }
    cout<<result<<endl;
     return 0;
}
// binary search
int searchit(int arr[],int n,int val)// n = size arr
{
    int first,last;
    first=0;
    last=n-1;
    int i;
    while(first<last)
    {
        //cout<<"f="<<first<<" l="<<last<<endl;
        i=first+(last-first)/2;
        if(arr[i]==val) return i;
        if(arr[i]>val)
        {
           last=i-1;
        }
        else if(arr[i]<val)
        {
            first=i+1;
        }
     }
    if(arr[first]==val)
    {
        return first;
    }
    return -1;
}
 int saveus(int arr[],int n,int k)
{
    int sum=0;
   // cout<<"\tk="<<k<<endl;
    for(int i=0;arr[i]<(float)k/2;i++)
    {
        if(searchit(arr,n,k-arr[i])>-1)
        {
            //cout<<"justhere"<<endl;
            if(arr[i]!=k/2 || n%2==0)
            {
                sum++;
                //cout<<"here"<<endl;
            }
        }
    }
    return sum;
}
  