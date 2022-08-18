#include <iostream>
#include<string>
#include<stdio.h>
using namespace std;
 int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int result=0;
    int i=0;
    while(i<str.length()-1 && str.length()>1)
    {
        if(str[i]==str[i+1])
        {
            result++;
        }
        i++;
    }
    cout<<result<<endl;
    return 0;
}