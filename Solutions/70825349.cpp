#include<bits/stdc++.h>
using namespace std;
 int arr[20];
map<int ,string>is;
map<string,int>si;
int n,m;
int adj[20][20];
  int  func()
{
    arr[0]++;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>1)
        {
            arr[i]-=2;
            arr[i+1]++;
         }
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
     }
    return sum;
}
  bool check()
{
    for(int i=0;i<n;i++){
       if(arr[i]){
           for(int j=0;j<n;j++){
               if(arr[j]&&i!=j&&adj[i][j])
                 return false;
           }
       }
   }
    return true;
 }
 int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        is[i]=s;
        si[s]=i;
    }
    for(int i=0;i<m;i++){
        string s,t;
        cin>>s>>t;
        adj[si[s]][si[t]]=1;
        adj[si[t]][si[s]]=1;
    }
     int maxi=0;
    int val;
    int brr[16];
    for(int i=1;i<round( pow(2,n) );i++)
    {
         val=func();
         if(check())
         {
            if(maxi<val)
            {
             maxi=max(maxi,val);
             for(int j=0;j<16;j++)brr[j]=arr[j];
            }
          }
    }
    cout<<maxi<<endl;
    set<string>res;
    for(int i=0;i<n;i++)
    {
        if(brr[i])res.insert(is[i]);
    }
    for(set<string>::iterator it=res.begin();it!=res.end();it++)
        cout<<(string)*it<<endl;
      return 0;
}
            