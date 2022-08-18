#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    int n;
    cin>>n;
    vector<int> arr,brr;
    int number=0;
    arr.push_back(1);
    bool a=false;
    for(int i=2;i<=2*n;i++)
    {
        if(a)
        {
            if(number==0)
            {
                arr.push_back(i);
                number++;
            }
            else
            {
                number=0;
                arr.push_back(i);
                a=false;
            }
        }
        else
        {
            if(number==0)
            {
                brr.push_back(i);
                number++;
            }
            else
            {
                number=0;
                brr.push_back(i);
                a=true;
            }
        }
    }
    if( n%2==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
            printf("%d ",arr[i]);
        for(int i=0;i<n;i++)
            printf("%d ",brr[i]);
    }
    return 0;
}