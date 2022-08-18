#include<iostream>
using namespace std;
  int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=1;i<n+1;i++)
      cin>>arr[i];
    int one[n+1]={0};
    int zero[n+1]={0};
    for(int i=1;i<=n;i++)
    {
      one[i]=one[i-1];
      zero[i]=zero[i-1];
       if(arr[i]==1)one[i]++;
      else zero[i]++;
    }
    int res=one[n];
    int maxi=-100000;
    for(int i=0;i<=n;i++)
    {
      for(int j=i+1;j<=n;j++)
      {
        maxi=max(maxi,zero[j]-zero[i]-(one[j]-one[i]));
      }
    }
    std::cout << res+maxi << '\n';
     return 0;
 }