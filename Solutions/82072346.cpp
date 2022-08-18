#include <bits/stdc++.h>
 using namespace std;
  void test()
{
    string str;
    cin>>str;
    int one=0;
    int zero=0;
    int minres=str.size();
    for(int i=0;i<str.size();i++)
        if(str[i]=='1')one++;
        else zero++;
    int leftzero=0;
    int leftone=0;
    for(int i=0;i<str.size();i++)
    {
        int rzero=zero-leftzero;
        int rone=one-leftone;
        minres=min(minres, leftone+rzero );// 0011
        minres=min(minres, leftzero+rone );// 1100
        if(str[i]=='1')leftone++;
        else leftzero++;
    }
    cout<<minres<<endl;
}
 int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        test();
    }
    return 0;
}