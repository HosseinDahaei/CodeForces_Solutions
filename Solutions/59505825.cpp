#include <bits/stdc++.h>
#include<string>
using namespace std;
bool isok(string a,string b);
bool autoo(string a,string b);
int findfrom(string str,int from,char c);
 int main()
{
    string first,second;
    cin>>first;
    cin>>second;
    if(autoo(second,first))
    {
        cout<<"automaton"<<endl;
        return 0;
    }
    if(isok(second,first) && isok(first,second))
    {
        cout<<"array"<<endl;
        return 0;
    }
    if(isok(second,first))
    {
        cout<<"both"<<endl;
        return 0;
    }
    cout<<"need tree"<<endl;
    return 0;
}
 bool isok(string a,string b)
{
    // a is in b ?
    for(int i=0;i<a.size();i++)
    {
        if(b.find(a[i])!=string::npos)
        {
            b.erase(b.begin()+b.find(a[i]));
        }
        else
        {
            return false;
        }
    }
    return true;
  }
 bool autoo(string a,string b)
{
    int pos=-10;
    for(int i=0;i<a.size();i++)
    {
        //cout<<i<<"---------"<<endl;
        if(findfrom(b,pos,a[i])!=-1)
        {
            int alaki=findfrom(b,pos,a[i]);
            //cout<<"returned "<<alaki<<"pos="<<pos<<endl;
            if(alaki<pos)
            {
                return false;
            }
            else pos=alaki;
            b[pos]='!';
        }
        else
        {
            //cout<<"flag1"<<endl;
            return false;
        }
        //cout<<b<<endl;
    }
    return true;
  }
 int findfrom(string str,int from,char c)
{
    for(int i=0;i<str.size();i++)
    {
        if(i>from)
        {
          if(str[i]==c) return i;
        }
    }
    return -1;
}