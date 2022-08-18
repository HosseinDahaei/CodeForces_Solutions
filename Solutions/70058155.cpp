#include<bits/stdc++.h>
using namespace std;
 #define ll long long
    void mytest()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(n==1)
    {
        cout<<"Yes"<<endl;
        return;
    }
    int k1=n-1;
    for(int i=0;i<n;i++){
        if(arr[i]<i){
            k1=i-1;
            break;
        }
    }
    int k2=0;
    for(int i=n-1;i>=0;i--){
        if(arr[i]<n-1-i){
            k2=i+1;
            break;
        }
    }
    //cout<<k1<<" "<<k2<<endl;
    if(k2-k1>0)
    {
        cout<<"No"<<endl;
     }
    else
    {
        cout<<"Yes"<<endl;
    }
 }
    int main()
{
    int t;
    cin>>t;
    while(t--){
        mytest();
        cout<<endl;
    }
    return 0;
 }
               