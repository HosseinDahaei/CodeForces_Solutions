#include <iostream>
 using namespace std;
 int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int r,g,b;
        cin>>r>>g>>b;
        if(r+b<g-1 || r+g<b-1 || b+g<r-1)
        {
            cout<<"No"<<endl;
        }
        else
            cout<<"Yes"<<endl;
    }
    return 0;
}