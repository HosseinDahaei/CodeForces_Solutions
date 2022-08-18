#include <iostream>
 using namespace std;
 int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n-1];
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
    }
    k--;
    int c=0;
    while(c<k)
    {
        c+=arr[c];
    }
    if(c==k)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}