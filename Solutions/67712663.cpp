#include <iostream>
 using namespace std;
 int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,s;
        cin>>n>>s;
        int maxval=0;
        int maxindex=0;
        long long int sum=0;
        long long int gsum=0;
        for(int i=1;i<=n;i++)
        {
            int a;
            cin>>a;
            gsum+=a;
            if(sum-maxval<s)
            {
                if(a>maxval && sum<=s)
                {
                    maxval=a;
                    maxindex=i;
                }
                sum+=a;
            }
        }
        if (gsum>s)
            cout<<maxindex<<endl;
        else
            cout<<0<<endl;
    }
    return 0;
}