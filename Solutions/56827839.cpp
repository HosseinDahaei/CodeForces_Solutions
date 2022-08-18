#include <iostream>
#include<stdio.h>
using namespace std;
 int main()
{
      int n;
    cin>>n;
    char str[n];
    char a;
    scanf("%1c",&a);
    for(int i=0;i<n;i++)
    {
        //char a;
        scanf("%1c",&a);
        str[i]=a;
    }
    if(n<26)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    int arr[26]={0};
    for(int i=0;i<n;i++)
    {
        int k=(int)str[i]-65;
        if(k>30) k-=32;
        arr[k]=1;
     }
    int result=1;
    for(int i=0;i<26;i++)
    {
        //cout<<arr[i];
        result*=arr[i];
    }
    if(result) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
  