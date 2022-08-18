#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    int n,m;
    cin>>m>>n;
    int row[m];
    int col[n];
    fill(row,row+m,-1);
    fill(col,col+n,-1);
    bool ok=true;
    vector<int> rows,cols;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        {
            int k;
            cin>>k;
            if(k==0)
            {
                if(row[i]==1 || col[j]==1)
                {
                    ok=false;
                    //cout<<i<<" "<<j<<endl;
                }
                row[i]=0;
                col[j]=0;
            }
            else // k==1
            {
                rows.push_back(i);
                cols.push_back(j);
             }
        }
    for(int k=0;k<rows.size();k++)
    {
        int i,j;
        i=rows[k];
        j=cols[k];
        //printf("1 in %d %d\n",i,j);
        if(row[i]==0 && col[j]==0)
        {
            ok=false;
            //cout<<i<<" "<<j<<endl;
        }
        else
        {
            bool miniok=false;
            if(row[i]==0)
            {
                for(int l=0;l<m;l++)
                    if(row[l]!=0)
                        miniok=true;
            }
            else if(col[j]==0)
            {
                for(int l=0;l<n;l++)
                    if(col[l]!=0)
                        miniok=true;
            }
            else if(row[i]!=0 && col[j]!=0)
            {
                continue;
            }
            if(miniok==false)
            {
                ok=false;
            }
        }
        /*if(row[i]==-1)
            row[i]=1;
        if(col[j]==-1)
            col[j]=1;*/
    }
       /*for(int i=0;i<m;i++)
        cout<<row[i]<<",";
    cout<<endl;
    for(int j=0;j<n;j++)
        cout<<col[j]<<",";
    cout<<endl;*/
     if(ok)
    {
        cout<<"YES"<<endl;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(row[i]!=0 && col[j]!=0)
                 cout<<"1 ";
                 else
                    cout<<"0 ";
            }
            cout<<endl;
        }
     }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}