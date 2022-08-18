#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    int n,l;
    cin>>n>>l;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int first=arr[0]-0;
    int last= l-arr[n-1];
    double maxi=max(first,last);
    for(int i=1;i<n;i++)
    {
        if( (double)(arr[i]-arr[i-1])/2 > maxi)
            maxi=(double)(arr[i]-arr[i-1])/2;
    }
    //cout<<maxi<<endl;
    printf("%.9f\n",maxi);
    return 0;
}