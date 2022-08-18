#include <bits/stdc++.h>
 using namespace std;
void addit(char c);
 vector<char> data;
int main()
{
    int n,m;
    char boss;
    cin>>n>>m>>boss;
    int** arr=new int*[n];
    for(int i=0;i<n;i++)
        arr[i]=new int[m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            char a;
            scanf("%c",&a);
            if(a=='\n')
            {
                j--;
                continue;
            }
            else
            {
                arr[i][j]=a;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==boss)
            {
                if(i>0)// up
                {
                    if(arr[i-1][j]!=boss && arr[i-1][j]!='.')
                        addit(arr[i-1][j]);
                }
                if(i<n-1)// down
                {
                    if(arr[i+1][j]!=boss && arr[i+1][j]!='.')
                        addit(arr[i+1][j]);
                }
                if(j>0)// left
                {
                    if(arr[i][j-1]!=boss && arr[i][j-1]!='.')
                        addit(arr[i][j-1]);
                }
                if(j<m-1)// right
                {
                    if(arr[i][j+1]!=boss && arr[i][j+1]!='.')
                    {
                        addit(arr[i][j+1]);
                    }
                }
            }
        }
    }
    cout<<data.size()<<endl;
    return 0;
}
 void addit(char c)
{
    for(int i=0;i<data.size();i++)
    {
        if(data[i]==c)
            return;
    }
    data.push_back(c);
}