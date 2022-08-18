#include <bits/stdc++.h>
 using namespace std;
void func(string str)
{
    int zero=0;
    int sum=0;
    int even=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='0')zero++;
        if(str[i]=='2'||str[i]=='4'||str[i]=='6'||str[i]=='8')even++;
        sum+=(int)str[i]-48;
    }
    if(sum==0)
    {
        cout<<"red"<<endl;
        return ;
    }
     if(zero==0)
    {
        cout<<"cyan"<<endl;
        return ;
    }
    if(even==0 && zero==1)
    {
        cout<<"cyan"<<endl;
        return ;
    }
    if(sum%3==0)
    {
        cout<<"red"<<endl;
    }
    else
        cout<<"cyan"<<endl;
 }
int main()
{
    //cout<<(int)'0'<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        func(str);
    }
    return 0;
}