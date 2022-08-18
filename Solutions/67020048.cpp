#include<bits/stdc++.h>
#include<algorithm>
#include<stdio.h>
using namespace std;
 int main()
{
    int n;
    cin>>n;
    int arr[n];
    int black=0;
    for(int i=0;i<n;i++)
    {
        char s;
        scanf("%c",&s);
        if(s=='\n')
        {
            i--;
            continue;
        }
        if(s=='W')
            arr[i]=1;
        if(s=='B')
        {
            arr[i]=0;
            black++;
        }
     }
    if(black%2==1 && ((n-black)%2)==1 )
    {
        cout<<-1<<endl;
        return 0;
    }
    queue<int> data;
    if(black%2==1)
    {
        if(arr[0]==1)
        {
            arr[0]=!arr[0];
            arr[1]=!arr[1];
            data.push(1);
        }
    }
    else if( (n-black)%2==1 )
    {
        if(arr[0]==0)
        {
            arr[0]=!arr[0];
            arr[1]=!arr[1];
            data.push(1);
        }
    }
    for(int i=1;i<n-1;i++)
    {
        if(arr[i]!=arr[i-1])
        {
            data.push(i+1);
            arr[i]=!arr[i];
            arr[i+1]= !arr[i+1];
        }
     }
    cout<<data.size()<<endl;
    while(!data.empty())
    {
        cout<<data.front()<<" ";
        data.pop();
    }
    return 0;
 }
  