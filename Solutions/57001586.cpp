#include<bits/stdc++.h>
 using namespace std;
int a,b;
int func(int tA,int fA,int tB,int fB);
int main()
{
    int n,h,k;
    cin>>n>>h>>a>>b>>k;
    int query1[k];
    int query2[k];
    int query3[k];
    int query4[k];
    for(int i=0;i<k;i++)
    {
        cin>>query1[i]>>query2[i]>>
        query3[i]>>query4[i];
    }
    for(int i=0;i<k;i++)
    {
        cout<<func(query1[i],query2[i],query3[i],query4[i])<<endl;
    }
    return 0;
}
 int func(int tA,int fA,int tB,int fB)
{
    if(tA==tB)
        return abs(fA-fB);
     int amoodi;
    if(a<=fA && fA<=b)
        amoodi=0;
    else if(fA<a)
    {
        amoodi=a-fA;
    }
    else// fA > b
    {
        amoodi=b-fA;
    }
     int ofoghi=tB-tA;
    return abs(ofoghi)+ abs(amoodi)+ func(tB,fA+amoodi,tB,fB);
 }
 