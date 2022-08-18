#include <iostream>
 using namespace std;
 int main()
{
    string str;
    cin>>str;
    bool flag=true;
    for(int i=0;i<str.size();i++)
    {
        if(flag)
        {
            if(str[i]=='0')
            {
                flag=false;
            }
            else if(i==str.size()-1)
            {
             }
            else
            {
                cout<<str[i];
            }
        }
        else
            cout<<str[i];
    }
    cout<<endl;
    return 0;
}