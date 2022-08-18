#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(int a,int b);
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    vector<int> increasing,decreasing;
    for(int i=0;i<n-2;i++)
    {
        if(arr[i]==arr[i+1] && arr[i]==arr[i+2])
        {
            cout<<"NO"<<endl;
            return 0 ;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(i!=n-1)
        {
            if(arr[i]==arr[i+1])
            {
                increasing.push_back(arr[i]);
                decreasing.push_back(arr[i+1]);
                i++;
            }
            else
            {
                increasing.push_back(arr[i]);
            }
        }
        else
        {
            increasing.push_back(arr[i]);
        }
    }
    sort(increasing.begin(),increasing.end());
    sort(decreasing.begin(),decreasing.end(),cmp);
    cout<<"YES"<<endl;
    cout<<increasing.size()<<endl;
    for(int i=0;i<increasing.size();i++)
        cout<<increasing[i]<<" ";
    cout<<endl;
    cout<<decreasing.size()<<endl;
    for(int i=0;i<decreasing.size();i++)
        cout<<decreasing[i]<<" ";
    cout<<endl;
      return 0;
}
bool cmp(int a,int b)
{
    return a>b;
}
 