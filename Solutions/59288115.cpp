#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    int n,m;
    cin>>n>>m;
    int** arr=new int*[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=new int[m];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    bool possible=true;
    vector<int> resx;
    vector<int> resy;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==0) continue;
            bool f=false;
            if(j<m-1 && i<n-1)
                if(arr[i+1][j]==1 && arr[i][j+1]==1 && arr[i+1][j+1]==1)
                {
                    f=true;
                    resx.push_back(i);
                    resy.push_back(j);
                }
            if(j>0 && i<n-1)
                if(arr[i+1][j]==1 && arr[i][j-1]==1 && arr[i+1][j-1]==1)
                    f=true;
            if(i>0 && j<m-1)
                if(arr[i][j+1]==1 && arr[i-1][j+1]==1 && arr[i-1][j]==1)
                    f=true;
            if(j>0 && i>0)
                if(arr[i-1][j]==1 && arr[i][j-1]==1 && arr[i-1][j-1]==1)
                    f=true;
            if(f==false)
            {
                possible=false;
            }
        }
    }
    if(possible==false)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<resx.size()<<endl;;
        for(int i=0;i<resx.size();i++)
            cout<<resx[i]+1<<" "<<resy[i]+1<<endl;
     }
    return 0;
}