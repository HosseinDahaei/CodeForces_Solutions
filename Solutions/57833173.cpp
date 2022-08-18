#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    int q;
    cin>>q;
    int n,k;
    vector< vector<int> > result;
    for(int i=0;i<q;i++)
    {
        cin>>n>>k;
        int sum=0;
        bool arr[n];
        // is it possible?
        int counter=0;
        bool searchfor=true;
        for(int j=0;j<n;j++)
        {
            long long s;
            cin>>s;
            s=s%2;
            sum+=s;
            if(sum%2==1)
                arr[j]=true;
            else
                arr[j]=false;
            if(arr[j]==searchfor)
            {
                counter++;
                searchfor=!searchfor;
            }
        }
        vector<int> node;
        if(counter>=k) // possible
        {
            if(k%2==0) // end with false
            {
                if(arr[n-1]==true) // impossible
                    {
                        result.push_back(node);
                        continue;
                    }
                searchfor=false;
                for(int h=n-1;h>-1 && k>0;h--)
                {
                    if(arr[h]==searchfor)
                    {
                        node.push_back(h+1);
                        searchfor=!searchfor;
                        k--;
                    }
                }
                result.push_back(node);
            }
            else  // end with true
            {
                if(arr[n-1]==false) // impossible
                    {
                        result.push_back(node);
                        continue;
                    }
                searchfor=true;
                for(int h=n-1;h>-1 && k>0;h--)
                {
                    if(arr[h]==searchfor)
                    {
                        node.push_back(h+1);
                        searchfor=!searchfor;
                        k--;
                    }
                }
                result.push_back(node);
            }
        }
        else  // impossible
        {
            result.push_back(node);
        }
    }
    for(int i =0;i<result.size();i++)
    {
        //cout<<"i = "<<i<<endl;
        if(result[i].size()==0)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for(int h=result[i].size()-1;h>=0;h--)
            {
                cout<<result[i][h]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}