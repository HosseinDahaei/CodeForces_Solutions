#include<bits/stdc++.h>
using namespace std;
 int main()
{
    string str;
    cin>>str;
    bool space=false;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B')
        {
            // do nothing
            i+=2;
        }
        else
        {
            if(space)
                cout<<" ";
             while(true)
            {
                cout<<str[i];
                i++;
                if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B' || i>str.size()-1)
                {
                    space=true;
                    break;
                }
            }
            i--;
        }
    }
    return 0;
}