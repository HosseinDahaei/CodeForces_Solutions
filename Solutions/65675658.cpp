#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    for(int h=0;h<k;h++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        int best=1;
        for(int i=n-1;i>=0;i--)
        {
            if(min(arr[i],n-i)>best)
                best=min(arr[i],n-i);
        }
        cout<<best<<endl;
    }
    return 0;
}
 