#include <bits/stdc++.h>
 using namespace std;
 int main()
{
     int n;
    cin>>n;
    vector<int> data;
    long long int sum=0;
    int oddnumber=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a>0 || a%2!=0)
        {
            data.push_back(a);
            sum+=a;
            if(a%2!=0) oddnumber++;
        }
    }
    /*for(int j=0;j<data.size();j++)
                cout<<data[j]<<" ";
            cout<<endl;*/
    if(oddnumber==1)
    {
        cout<<sum<<endl;
    }
    else
    {
        if(oddnumber%2==0)
        {
            //cout<<"delete one"<<endl;
            int minodd=1000000;
            int loc=0;
            for(int i=0;i<data.size();i++)
            {
                if(data[i]<minodd && data[i]%2!=0)
                {
                    minodd=data[i];
                    loc=i;
                }
            }
            data.erase(data.begin()+loc);
            sum-=minodd;
         }
        while(true)
        {
            if(oddnumber<3) break;
            //cout<<"while"<<endl;
            int min1=1000000;
            int min2=1000000;
            int loc1=0;
            int loc2=0;
            for(int i=0;i<data.size();i++)
            {
                //cout<<"i="<<i<<endl;
                if(data[i]%2!=0)
                {
                    if(data[i]<min2)
                    {
                        min2=data[i];
                        loc2=i;
                        if(min2<min1)
                        {
                            swap(min1,min2);
                            swap(loc1,loc2);
                        }
                        //cout<<"mins: "<<min1<<min2<<endl;
                    }
                }
            }
             if(min1+min2>0) break;
             oddnumber-=2;
            sum-=min1+min2;
            //cout<<loc1<<" "<<loc2<<endl;
            if(loc1<loc2)
                swap(loc1,loc2);
            data.erase(data.begin()+loc1);
            data.erase(data.begin()+loc2);
            /*for(int j=0;j<data.size();j++)
                cout<<data[j]<<" ";
            cout<<endl;*/
        }
         cout<<sum<<endl;
    }
     return 0;
}