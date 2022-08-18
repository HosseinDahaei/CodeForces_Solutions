#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 int main()
{
    int m,s;
    cin>>m>>s;
    if(m==1 && s==0)
    {
        cout<<"0 0"<<endl;
        return 0;
    }
    string largest;
    string smallest;
    int k=s;
    for(int i=0;i<m;i++)
    {
        if(k>9)
        {
            k-=9;
            largest+='9';
        }
        else
        {
            largest+=(char)(k+48);
            k=0;
        }
    }
    if(k>0 || s==0 )
    {
        cout<<-1<<" "<<-1<<endl;
        return 0;
    }
     if(largest[largest.size()-1]!='0' && largest!="-1")
    {
        smallest=largest;
        reverse(smallest.begin(),smallest.end());
    }
    else if(largest!="-1")
    {
        k =s;
        for(int i=0;i<m;i++)
        {
            if(i==0)
            {
                int a=9*(m-1-i);
                a = s-a;
                if(a>0)
                {
                    smallest+=(char)(a+48);
                    s-=a;
                }
                else
                {
                    smallest+='1';
                    s-=1;
                }
            }
            else
            {
                int a=9*(m-1-i);
                a = s-a;
                if(a>0)
                {
                    smallest+=(char)(a+48);
                    s-=a;
                }
                else
                {
                    smallest+='0';
                }
            }
        }
     }
     cout<<smallest<<" "<<largest<<endl;
    return 0;
}