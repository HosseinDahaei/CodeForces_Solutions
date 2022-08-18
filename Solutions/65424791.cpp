#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    int t;
    cin>>t;
    for(int d=0;d<t;d++)
    {
        int n;
        cin>>n;
        int arr[n];
        int sum=0;
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        int minn=1000*1000*2;
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i]>minn)
            {
                sum++;
            }
            minn=min(arr[i],minn);
        }
        cout<<sum<<endl;
    }
    return 0;
}