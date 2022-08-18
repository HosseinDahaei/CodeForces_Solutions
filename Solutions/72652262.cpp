#include <bits/stdc++.h>
 using namespace std;
int arr[40000+100],brr[40000+100];
int logarr[40000+100],logbrr[40000+100];
int n,m,k;
  int func(int row,int col)
{
    if(row>n || col>m) return 0;
    int res=0;
    int r1=0;
    int r2=0;
    for(int i=1;i<=n-row+1;i++)
    {
        if(logarr[i]>=row) r1++;
    }
    for(int j=1;j<=m-col+1;j++)
    {
        if(logbrr[j]>=col) r2++;
    }
    //cout<<"i returned "<<res<<" for "<<row<<" "<<col<<endl;
    return r1*r2;
 }
  int main()
{
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=n;i>=1;i--)
    {
        if(arr[i]==1)
        {
            sum++;
            logarr[i]=sum;
        }
        else
        {
            sum=0;
            logarr[i]=sum;
        }
    }
      for(int i=1;i<=m;i++)
        scanf("%d",&brr[i]);
    sum=0;
    for(int i=m;i>=1;i--)
    {
        if(brr[i]==1)
        {
            sum++;
            logbrr[i]=sum;
        }
        else
        {
            sum=0;
            logbrr[i]=sum;
        }
    }
         long long res=0;
    set<int>row,col;
    for(int i=1;i<=sqrt(k)+1;i++)
    {
        if( (k/i) *i == k && k!=i*i )
        {
            if(row.count(i)==0)
            {
                res+=func(i,k/i);
                row.insert(i);
                col.insert(k/i);
            }
             if(col.count(i)==0)
            {
                res+=func(k/i,i);
                col.insert(i);
                row.insert(k/i);
            }
        }
    }
    int root=sqrt(k);
    if( root * root == k)
        res+=func(root,root);
    cout<<res<<endl;
    return 0;
}