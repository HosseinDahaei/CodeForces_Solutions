#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    long long int n;
    cin>>n;
    vector<long long int> primes;
    long long i=2;
    while(n>1)
    {
        if(i>sqrt(n)+10)
        {
            bool add=true;
            for(int j=0;j<primes.size();j++)
            {
                if(n%primes[j]==0) add=false;
            }
            if(add)
                primes.push_back(n);
            break;
        }
        if(n%i==0)
        {
            bool add=true;
            for(int j=0;j<primes.size();j++)
            {
                if(i%primes[j]==0) add=false;
            }
            if(add)
                primes.push_back(i);
            n/=i;
        }
        else
        {
            if(i%2==1) i+=2;
            else
                i++;
        }
    }
    long long result=1;
    for(int i=0;i<primes.size();i++)
    {
        result*=primes[i];
        //cout<<primes[i]<<endl;
    }
     cout<<result<<endl;
    return 0;
}