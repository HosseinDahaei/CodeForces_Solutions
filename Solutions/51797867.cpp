#include <iostream>
#include<string>
#include<stdio.h>
using namespace std;
 int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    int brr[m];
    int alaki;
    for(int i=0;i<n;i++)
    {
        cin>>alaki;
        arr[i]=alaki;
    }
    for(int i=0;i<m;i++)
    {
        cin>>alaki;
        brr[i]=alaki;
    }
    int i,j=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
           if(arr[i]==brr[j])
            {
              cout<<arr[i]<<" ";
              break;
            }
        }
     }
       return 0;
}