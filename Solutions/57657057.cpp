#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    int q;
    cin>>q;
    long long a,b,c;
    vector<long long int> results;
    long long alaki;
    for(int i=0;i<q;i++)
    {
        cin>>a>>b>>c;
        /*long long ab,bc,ac;
        ab=abs(a-b);
        ac=abs(a-c);
        bc=abs(b-c);
        if(ab<=ac && ab<=bc)
        {
            alaki=ceil((a+b+c-ab)/2.0);
            cout<<a+b+c<<endl;
            cout<<"1"<<endl;
        }
        else if(ac<=ab && ac<=bc)
        {
            alaki=ceil((a+b+c-ac)/2.0);
            cout<<2<<endl;
        }
        else
        {
            alaki=ceil((a+b+c-bc)/2.0);
            cout<<3<<endl;
        }*/
        alaki=(a+b+c)/2;
        results.push_back(alaki);
    }
    for(int i=0;i<q;i++)
    {
        cout<<results[i]<<endl;
    }
    return 0;
}