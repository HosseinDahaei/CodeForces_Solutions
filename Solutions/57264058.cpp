#include <iostream>
 using namespace std;
long long func(int n,long long arr[],long long brr[],int index,bool isarr);
long long max2(long long a,long long b);
int main()
{
    int n;
    cin>>n;
    long long arr[n];
    long long brr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
        cin>>brr[i];
    long long int ** log=new long long int*[2];
    for(int i=0;i<2;i++)
        log[i]=new long long int[n];
     log[1][n-1]=arr[n-1];
    log[0][n-1]=brr[n-1];
    log[1][n-2]=max2( arr[n-2]+log[0][n-1] , arr[n-1] );
    log[0][n-2]=max2(brr[n-2]+log[1][n-1] , brr[n-1] );
     for(int i=n-3;i>=0;i--)
    {
        log[0][i]=max2( brr[i]+log[1][i+1] , log[0][i+1] );
        log[1][i]=max2( arr[i]+log[0][i+1] , log[1][i+1] );
    }
    cout<<max2( log[0][0]  , log[1][0]  )<<endl;
    return 0;
}
 long long func(int n,long long  arr[],long long  brr[],int index,bool isarr)
{
    if(index>=n)
        return 0;
    if(index==n-1)
    {
        if(isarr)
        {
            return arr[index];
        }
        else
        {
            return brr[index];
        }
    }
    else
    {
        long long maxx=0;
        if(isarr)
        {
            maxx=max2(maxx,arr[index]+func(n,arr,brr,index+1,!isarr));
            if(index<n-1)
                maxx=max2(maxx,arr[index+1]+func(n,arr,brr,index+2,!isarr));
        }
        else
        {
            maxx=max2(maxx,brr[index]+func(n,arr,brr,index+1,!isarr));
            if(index<n-1)
                maxx=max2(maxx,brr[index+1]+func(n,arr,brr,index+2,!isarr));
        }
        return maxx;
    }
}
 long long max2(long long a,long long b)
{
    if(a>b)
        return a;
    else return b;
}