#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    vector<char> str;
    char a='1';
    while(a!='\n')
    {
        scanf("%c",&a);
        str.push_back(a);
    }
    bool flag=true;
    int counter=0;
    while(flag)
    {
        flag = false;
        for(int i=1;i<str.size();i++)
        {
            if(str[i]==str[i-1])
            {
                str.erase(str.begin()+i);
                str.erase(str.begin()+i-1);
                /*for(int l=0;l<str.size();l++)
                    cout<<str[l]<<" ";
                cout<<endl;*/
                flag = true;
                counter++;
                break;
            }
        }
     }
    //cout<<counter<<endl;
    if(counter%2==0)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
    return 0;
}