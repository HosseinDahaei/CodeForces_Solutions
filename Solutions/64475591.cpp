#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    int n;
    cin>>n;
    queue<int> arr;
    for(int i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        arr.push(a);
     }
    int flag=0;
    while(arr.front()!=0 && flag<=n)
    {
        flag++;
        arr.push(1);
         arr.pop();
    }
       int maxi=0;
    int counter=0;
    for(int i=0;i<n;i++)
    {
        int k = arr.front();
        arr.pop();
        if(counter>0 && k==1)
            counter++;
        else if(k==1 && counter==0)
            counter++;
        else if(k==0)
        {
            maxi=max(maxi,counter);
            counter=0;
        }
    }
    maxi=max(maxi,counter);
    cout<<maxi<<endl;
    return 0;
}