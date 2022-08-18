#include <iostream>
#include<math.h>
#include<cmath>
using namespace std;
 int main()
{
    int n,a;
     cin>>n>>a;
    int r=min(abs(n-a),abs(a-1));
    a-=1;// we should start from zero
    int arr[n];
    int result=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(abs(i-a)>r)
        {
            if(arr[i]==1)
                result++;
        }
        else
        {
            if(i>a)
            {
                if(arr[i]==1 && arr[a-(i-a)]==1)
                    result++;
            }
            else
            {
                if(arr[i]==1 && arr[a+(a-i)]==1)
                    result++;
            }
        }
    }
    cout<<result<<endl;
    return 0;
}