#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int number;
    struct node* father;
};
 int main()
{
    int n;
    cin>>n;
    int k;
    struct node allnode[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>k;
        allnode[i].number=i;
        if(k!=-1)
            allnode[i].father=&allnode[k];
        else
            allnode[i].father=NULL;
    }
    struct node* start;
    int maxi=0;
    for(int i=1;i<=n;i++)
    {
        start=&allnode[i];
        //cout<<"start= "<<start->number<< " "<<start->father<<endl;
        int len=0;
        while((*start).father!=NULL)
        {
            start=(*start).father;
            len++;
        }
        if(len>maxi)
            maxi=len;
        //cout<<"len "<<i<< " = "<<len<<endl;
     }
    cout<<maxi+1<<endl;
    return 0;
}