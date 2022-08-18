#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    int n,m;
    cin>>n>>m;
     int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    long long sum=0;
    int current=0;
    int number=0;
    vector<int> result;
    /*
1 1000000000
1
     */
    for(int i=1;i<m+100;i++)
    {
        if(i!=arr[current] && sum+i<=m)
        {
            sum+=i;
            number++;
            result.push_back(i);
        }
        else
        {
            if(current<m-1)
                current++;
        }
        if(sum>=m || sum+i+1>m) break;
    }
    cout<<number<<endl;
    for(int i=0;i<result.size();i++)
        printf("%d ",result[i]);
    return 0;
}