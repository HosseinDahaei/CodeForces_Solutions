#include<bits/stdc++.h>
using namespace std;
 #define ll long long
 int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        int counter=0;
        long long alaki=9;
        while(alaki<=b)
        {
            if(alaki<=b)counter++;
            alaki*=10;
            alaki+=9;
        }
        cout<<(long long)a*counter<<endl;
    }
}
               