#include <iostream>
 using namespace std;
 int arr[100005];
 int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,m;
        cin>>n>>m;
        fill(arr,arr+100005,0);
        for(int i=1;i<=n;i++)
        {
            int a;
            cin>>a;
            arr[a]=i;
        }
        int brr[m];
        for(int i=0;i<m;i++)
        {
            int b;
            cin>>b;
            brr[i]=arr[b];
        }
        long long sum=0;
        int maxi=-1;
        for(int i=0;i<m;i++)
        {
            if(brr[i]>maxi)
            {
                sum+= 2*(brr[i]-1-i)+1;
                maxi = brr[i];
            }
            else
                sum++;
        }
        cout<<sum<<endl;
     }
    return 0;
}