#include<bits/stdc++.h>
using namespace std;
 long long pow(int n,int m)
{
  long long res=1;
  if(m==0) return 1;
  for(int i=0;i<m && res*n<1e15;i++)
    res*=n;
  return res;
}
 void func()
{
    int n;
    cin>>n;
    int arr[n];
    long long res=0;
    for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
      res+=abs(arr[i]-1);
    }
    sort(arr,arr+n);
    for(int i=2;;i++)
    {
      // if(n==100000)
      //   cout<<i<<endl;
      // if(pow(i,n-1)>1e9+1000)
      //   break;
      if(pow(i,n-1)-arr[n-1] > res || pow(i,n-1)>1e10 || n>35)
        break;
      long long sum=0;
      for(int j=0;j<n;j++)
      {
        sum+=abs(pow(i,j)-arr[j]);
        //(i==1000)
          //cout<<sum<<endl;
       }
      if(sum<res)
        res=sum;
    }
    cout<<res<<endl;
}
 int main()
{
    func();
  return 0;
}