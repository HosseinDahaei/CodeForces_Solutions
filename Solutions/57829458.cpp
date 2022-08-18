#include <iostream>
 using namespace std;
 int main()
{
    string str;
    cin>>str;
    string str2="hello";
    int j=0;
    int n=str.size();
    for(int i=0;i<str.size();i++)
    {
        if(j==n) break;
        if(str[i]==str2[j])
        {
            j++;
        }
    }
    //cout<<n<<endl;
    if(j==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}