#include<bits/stdc++.h>
#include<iostream>
using namespace std;
  int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
    sort(arr,arr+n);
    int number=0;
     int i=0,j=n-1;
    while(i<=j)
    {
      int taxi=arr[j];
      number++;
      j--;
      if(arr[i]+taxi<=4 && i<=j)i++,taxi+=arr[i];
      if(arr[i]+taxi<=4 && i<=j)i++,taxi+=arr[i];
      if(arr[i]+taxi<=4 && i<=j)i++,taxi+=arr[i];
      if(arr[i]+taxi<=4 && i<=j)i++,taxi+=arr[i];
    }
    cout<<number<<endl;
    return 0;
 }