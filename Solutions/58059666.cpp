#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 int main()
{
    queue<int> str;
    char a;
    //scanf("%1c",&a);
    while((a=getchar())!='\n')
    {
        if(str.size()>5)
        {
            str.pop();
        }
        str.push((int)a-48);
    }
    int k=str.size();
    int number=0;
    for(int i=0;i<k;i++)
    {
        number=number*10+str.front();
        str.pop();
    }
    //cout<<number<<endl;
    int result=1;
    number=number%4;
    result+= round(pow(2,number));
    result+= round(pow(3,number));
    result+= round(pow(4,number));
    cout<<result%5<<endl;
    return 0;
}