#include <iostream>
 using namespace std;
 int main()
{
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int arr[d]={0};
    int result=0;
    for(int i=0;i<d;i++)
    {
        if((i+1)%k==0) arr[i]=1;
        if((i+1)%l==0) arr[i]=1;
        if((i+1)%m==0) arr[i]=1;
        if((i+1)%n==0) arr[i]=1;
        if(arr[i]==1) result++;
        //cout<<""<<arr[i]<<endl;
    }
     cout<<result<<endl;
    return 0;
}