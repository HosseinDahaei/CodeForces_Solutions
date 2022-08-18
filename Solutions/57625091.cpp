#include <bits/stdc++.h>
using namespace std;
 int main()
{
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        if(i==0 && str[i]=='9')
        {
            cout<<9;
            continue;
        }
        if((int)str[i]<53 )
            cout<<str[i];
        else
        {
            int d=(int)str[i];
            cout<<(char)(53-abs(53-d)-1);
        }
    }
    cout<<endl;
    return 0;
}