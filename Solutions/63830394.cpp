#include <bits/stdc++.h>
 using namespace std;
int main()
{
    int h,w;
    cin>>h>>w;
    int arr[h],brr[w];
    for(int i=0;i<h;i++)
        cin>>arr[i];
    for(int i=0;i<w;i++)
        cin>>brr[i];
    bool flag=false;
    for(int i=0;i<h;i++)
    {
        if(arr[i]!=w)
        {
            if(brr[arr[i]]>=i+1)
                flag=true;
        }
    }
    for(int i=0;i<w;i++)
    {
        if(brr[i]!=h)
        {
            if(arr[brr[i]]>=i+1)
                flag=true;
        }
    }
    if(flag)
    {
        cout<<0<<endl;
        return 0;
    }
      int counter=0;
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<w;j++)
        {
            if(arr[i]-1<j-1 && brr[j]-1<i-1)
                counter++;
        }
    }
    long long value=1;
    for(int i=0;i<counter;i++)
    {
        value*=2;
        value=value%1000000007;
    }
    cout<<value<<endl;
    return 0;
}