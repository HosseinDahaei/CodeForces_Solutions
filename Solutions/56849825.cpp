#include <iostream>
 using namespace std;
 int main()
{
    int arr[3];
    int brr[3];
    for(int i=0;i<3;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<3;i++)
    {
        cin>>brr[i];
    }
    int diffrence=0;
    for(int i=0;i<3;i++)
    {
        if(arr[i]!=brr[i]) diffrence++;
    }
    if(diffrence>2)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}