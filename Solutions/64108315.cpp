#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    string str;
    int n;
    cin>>n;
    for(int h=0;h<n;h++)
    {
        cin>>str;
        int arr[str.size()];
        for(int i=0;i<str.size();i++)
        {
            arr[i]=(int)str[i];
        }
        sort(arr,arr+str.size());
        bool flag=false;
        for(int i=0;i<str.size()-1;i++)
        {
            if(arr[i+1]-arr[i]!=1)
            {
                flag=true;
            }
        }
        if(flag)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
     return 0;
}