#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 int main()
{
    string str;
    cin>>str;
    bool flag=true;
    for(int i=1;i<str.size();i++)
    {
        if((int)str[i]<123 && (int)str[i]>96)
            flag=false;
     }
    if(flag)
    {
        if((int)str[0]<123 && (int)str[0]>96)
        {
            cout<<(char)(  (int)str[0]-32 );
        }
        else
            cout<<(char)(  (int)str[0]+32 );
        for(int i=1;i<str.size();i++)
        {
            cout<<(char)(  (int)str[i]+32 );
        }
        cout<<endl;
    }
    else
    {
        cout<<str<<endl;
    }
    return 0;
}