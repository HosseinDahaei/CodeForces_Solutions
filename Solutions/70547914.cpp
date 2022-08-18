#include<bits/stdc++.h>
using namespace std;
  int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int arr[m],brr[m],crr[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr[i]>>brr[i]>>crr[i];
    }
    set<int> storage;
    for(int i=0;i<k;i++)
    {
        int a;
        cin>>a;
        storage.insert(a);
    }
    long long mini=99999999999999;
    for(int i=0;i<m;i++)
    {
        if(storage.count(arr[i])!=storage.count(brr[i]))
        {
            if(mini>crr[i])mini=crr[i];
        }
    }
    if(mini==99999999999999)cout<<-1<<endl;
    else
        cout<<mini<<endl;
}
               