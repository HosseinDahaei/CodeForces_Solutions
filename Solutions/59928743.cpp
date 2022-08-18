#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    vector<int> breaks;
    for(int i=1;i<n;i++)
    {
        if(abs(arr[i]-arr[i-1])!=1)
            breaks.push_back(i);
    }
    //cout<<breaks.size()<<endl;
    if(n==1)
    {
        cout<<"0 0"<<endl;
        return 0;
    }
    if(breaks.size()==0)
    {
        if(arr[0]<arr[1])
            cout<<"0 0"<<endl;
        else
            cout<<1<<" "<<n<<endl;
        return 0;
    }
    if(breaks.size()>2)
    {
        cout<<"0 0"<<endl;
        return 0;
    }
    if(breaks.size()==1)
    {
        if(arr[0]<arr[breaks[0]-1] || breaks[0]==1)
        {
            if(arr[0]!=1)
            {
                cout<<"0 0"<<endl;
             }
            else
            {
                cout<<breaks[0]+1<<" "<<n<<endl;
            }
        }
        else
        {
            if(arr[breaks[0]-1]!=1)
                cout<<"0 0"<<endl;
            else
            {
                cout<<1<<" "<<breaks[0]<<endl;
            }
        }
     }
    else // 2
    {
       if(arr[0]>arr[breaks[0]-1])
       {
           cout<<"0 0"<<endl;
       }
       else
       {
           if(arr[0]!=1) cout<<"0 0"<<endl;
           else
           {
               if(arr[breaks[0]]>arr[breaks[1]]) cout<<"0 0"<<endl;
               else
               {
                   cout<<breaks[0]+1<<" "<<breaks[1]<<endl;
               }
           }
       }
    }
     return 0;
}