#include <iostream>
 using namespace std;
 int main()
{
    string str;
    string a="abcdefghijklmnopqrstuvwxyz";
    int arr[26]={0};
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        for(int j=0;j<26;j++)
        {
            if(str[i]==a[j])
                arr[j]=1;
        }
    }
    int sum=0;
    for(int i=0;i<26;i++)
        if(arr[i]) sum++;
    if(sum%2)
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    else
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    return 0;
}