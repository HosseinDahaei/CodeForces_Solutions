#include <iostream>
 using namespace std;
 int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
         cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if (arr[i]==2)
            cout<<2<<endl;
        else if(arr[i]%2==0)
            cout<<0<<endl;
        else
            cout<<1<<endl;
    }
    return 0;
}