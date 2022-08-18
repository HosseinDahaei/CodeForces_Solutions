#include <bits/stdc++.h>
 using namespace std;
bool isin(int arr[],int n,int val);
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int m;
    cin>>m;
    int brr[m];
    for(int i=0;i<m;i++)
        cin>>brr[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(!isin(arr,n,arr[i]+brr[j]) && !isin(brr,m,arr[i]+brr[j]))
            {
                cout<<arr[i]<<" "<<brr[j]<<endl;
                return 0;
            }
        }
    }
      return 0;
}
bool isin(int arr[],int n,int val)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==val) return true;
    }
    return false;
}
 