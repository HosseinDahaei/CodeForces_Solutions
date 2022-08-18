#include <bits/stdc++.h>
 using namespace std;
bool isnotempty(int arr[],int n);
int main()
{
    int n;
    cin>>n;
    int result=0;
    int m=n;
    int arr[7];
    fill(arr,arr+7,0);
    int i=0;
    while(m)
    {
        result=max(result,m%10);
        arr[i]=m%10;
        i++;
        m/=10;
    }
    cout<<result<<endl;
    while(isnotempty(arr,7))
    {
        //find first 1
        int first=-1;
        for(int i=6;i>=0;i--)
        {
            if(arr[i]!=0)
            {
                first=i;
                break;
            }
        }
        for(int i=first;i>=0;i--)
        {
            if(arr[i]!=0)
            {
                arr[i]--;
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf(" ");
     }
    return 0;
}
 bool isnotempty(int arr[],int n)
{
    for(int i=0;i<n;i++)
        if(arr[i]!=0) return true;
    return false;
}