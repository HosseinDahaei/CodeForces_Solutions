#include <iostream>
#include<string>
#include<stdio.h>
using namespace std;
 int main()
{
      string str;
    getline(cin,str);
    //scanf("%s",&str);
    string alaki;
    int i=0;
    int flag=1;
    while(i<str.length())
    {
        if(flag==1)
        {
            if((int)str[i]>96)
            cout<<(char)((int)str[i]-32);
            else
                cout<<str[i];
            flag=0;
        }
        else
        {
         cout<<str[i];
         if(str[i]==' ')
                    flag=1;
         }
           i++;
    }
     return 0;
}