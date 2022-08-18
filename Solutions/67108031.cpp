#include <iostream>
 using namespace std;
 int main()
{
    int c,r;
    cin>>r>>c;
    if(c==1 && r==1)
    {
        cout<<0<<endl;
        return 0;
    }
    if(c==1)
    {
        for(int i=0;i<r;i++)
        cout<<i+2<<endl;
        return 0;
     }
    if(r==1)
    {
        for(int i=0;i<c;i++)
            cout<<i+2<<" ";
        cout<<endl;
        return 0;
    }
    int arr[r][c];
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            arr[i][j]=1;
    for(int j=0;j<c;j++)
        {
            cout<<(j+2)<<" ";
        }
        cout<<endl;
    for(int i=1;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<(j+2)*(c+1+i)<<" ";
        }
        cout<<endl;
    }
    return 0;
}