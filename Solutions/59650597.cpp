#include <bits/stdc++.h>
 using namespace std;
 struct querry
{
    int row;
    int col;
    int val;
};
bool cmp(struct querry a,struct querry b);
int main()
{
    int n;
    cin>>n;
    vector<struct querry> data;
    for(int i=2;i<=2*n;i++)
    {
        for(int j=1;j<i;j++)
        {
            int c;
            scanf("%d",&c);
            struct querry a;
            a.row=i;
            a.col=j;
            a.val=c;
            data.push_back(a);
        }
    }
    sort(data.begin(),data.end(),cmp);
    int arr[2*n+1];
    fill(arr,arr+2*n+1,0);
    int have=0;
    for(int i=0;i<data.size();i++)
    {
        int c=data[i].row;
        int d=data[i].col;
        if(arr[c]==0 && arr[d]==0)
        {
            have+=2;
            arr[c]=d;
            arr[d]=c;
        }
    }
    for(int i=1;i<=2*n;i++)
        printf("%d ",arr[i]);
    return 0;
}
bool cmp(struct querry a,struct querry b)
{
    return a.val>b.val;
}