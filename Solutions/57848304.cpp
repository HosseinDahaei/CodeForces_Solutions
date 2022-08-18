#include <iostream>
 using namespace std;
 int main()
{
    int nb,ex;
    cin>>nb>>ex;
    int sum=0;
    while(nb+ex>=3 && nb>0 && ex>0)
    {
        if(nb==ex)
        {
            if(nb+ex>=6)
            {
                nb-=3;
                ex-=3;
                sum+=2;
            }
            else
            {
                nb-=2;
                ex-=1;
                sum++;
            }
        }
        else if(nb>ex)
        {
            nb-=2;
            ex-=1;
            sum++;
        }
        else// nb<ex
        {
            nb-=1;
            ex-=2;
            sum++;
        }
     }
    cout<<sum<<endl;
    return 0;
}