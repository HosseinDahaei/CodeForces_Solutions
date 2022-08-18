#include <iostream>
 using namespace std;
 int main()
{
    int arr[5];
    int sum=0;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum==0)
    {
        cout<<-1<<endl;
        return 0;
    }
    if(sum%5!=0)
    {
        cout<<-1<<endl;
        return 0;
    }
    cout<<sum/5<<endl;
    return 0;
}