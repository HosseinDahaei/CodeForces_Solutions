#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 int main()
{
    ofstream fout ("output.txt");
    ifstream fin ("input.txt");
    int n,k;
    fin>>n>>k;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
       fin>>arr[i];
       sum+=arr[i];
    }
    int eated=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=3*k)
            eated+=k;
        if(arr[i]>=2*k)
            eated+=k;
        if(arr[i]>=1*k)
            eated+=k;
     }
    fout<<sum-eated<<endl;
     return 0;
}