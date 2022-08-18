#include <iostream>
 using namespace std;
 int main()
{
    char arr[4][4];
    bool flag=false;
    for(int  i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    }
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            int a=0;
            int b=0;
            for(int k=i;k<i+2;k++)
                for(int m=j;m<j+2;m++)
                {
                    if(arr[k][m]=='.') a++;
                    else b++;
                }
            if (a!=b)
                flag=true;
         }
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}