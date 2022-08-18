#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    string str;
    int n;
    cin>>n;
    int a;
    vector<int> even,odd;
    long long sum=0;
    for(int i=0;i<n;i++)
        {
            scanf("%d",&a);
            even.push_back(a);
        }
     for(int i=n-2;i>=0;i--)
    {
        if(even[i]!=even[i+1])
        {
            cout<<i+1<<endl;
            break;
        }
    }
     return 0;
}