#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    long long n;
    cin>>n;
    string a[5]={"Sheldon","Leonard","Penny","Rajesh","Howard"};
    if(n<=5)
    {
        cout<<a[n-1]<<endl;
        return 0;
    }
    int i=0;
    long long sum=0;
    while(sum+5*pow(2,i)<=n)
    {
        sum+=5*pow(2,i);
        i++;
    }
    n=n-sum;
    //cout<<"n="<<n<<endl;
    double result= (double)n/pow(2,i);
    //cout<<"result = "<<result<<endl;
    cout<<a[(int)ceil(result)-1]<<endl;
    return 0;
}