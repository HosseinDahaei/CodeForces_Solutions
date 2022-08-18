#include <iostream>
 using namespace std;
 int main()
{
    int n;
    cin>>n;
    int mini=0;
    int previous=0;
    int current=0;
    int alaki;
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>current;
        sum+=previous-current;
        if(sum<mini)
            mini=sum;
        previous=current;
    }
     if(mini<0)
        cout<<-1*mini<<endl;
    else
        cout<<0<<endl;
    return 0;
}
 