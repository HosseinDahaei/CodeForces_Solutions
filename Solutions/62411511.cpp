#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    int n;
    cin>>n;
    int arr[7];
    int sum=0;
     for(int i=0;i<7;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    int counter=0;
    n = n%sum;
    if (n==0)
        n = sum;
     while(n>0)
    {
        n-=arr[counter];
        //cout<<n<<endl;
        if(n<=0) break;
        counter = (counter+1)%7;
     }
    printf("%d\n",counter+1);
    return 0;
}