#include<bits/stdc++.h>
using namespace std;
bool contain(vector<int> brr,int n);
 int main()
{
     int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    vector<int> brr;
    int crr[200001]={0};
    int index;
    for(int i=n-1;i>-1;i--)
    {
        if(crr[arr[i]]==0)
        {
            index=arr[i];
            crr[arr[i]]=1;
        }
    }
    cout<<index<<endl;
    return 0;
}
 bool contain(vector<int> brr,int n)
{
    for(int i=0;i<brr.size();i++)
        if(brr[i]==n ) return true;
    return false;
}