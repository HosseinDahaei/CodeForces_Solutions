#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    int counter=0;
    int i=1;
    int maxi=1;
    while(i<=n)
    {
        maxi=max(arr[i],maxi);
        if(i<maxi)
        {
            i++;
            continue;
        }
        else
        {
            counter++;
            i++;
        }
    }
    cout<<counter<<endl;
    return 0;
}