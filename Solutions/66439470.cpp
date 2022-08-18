#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        int arr[a+1];
        for(int j=0;j<a;j++)
        {
            int b;
            scanf("%d",&b);
            arr[b]=j+1;
        }
        int maxi[a+1];
        int mini[a+1];
        maxi[1]=mini[1]=arr[1];
        for(int j=2;j<a+1;j++)
        {
            maxi[j]=max(maxi[j-1],arr[j]);
            mini[j]=min(mini[j-1],arr[j]);
        }
        ///-------
        /*for(int j=0;j<a+1;j++)
            cout<<arr[j]<<" ";
        cout<<endl;
        for(int j=0;j<a+1;j++)
            cout<<maxi[j]<<" ";
        cout<<endl;
        for(int j=0;j<a+1;j++)
            cout<<mini[j]<<" ";
        cout<<endl;*/
        ///-------
        for(int j=1;j<a+1;j++)
        {
            if(maxi[j]-mini[j]<j)printf("1");
            else printf("0");
        }
        cout<<endl;
    }
    return 0;
}