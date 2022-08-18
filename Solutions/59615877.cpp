#include <iostream>
 using namespace std;
 int main()
{
    int v1,v2,v3,vm;
    cin>>v1>>v2>>v3>>vm;
    if(vm>2*v3)
    {
        cout<<-1<<endl;
        return 0;
    }
    if(2*vm<v3)
    {
        cout<<-1<<endl;
        return 0;
    }
    int r1=2*v1;
    int r2=2*v2;
    for(int r3=v3;r3<=2*v3;r3++)
    {
        //cout<<r1<<" "<<r2<<" "<<r3<<endl;
        if(r1>2*vm && r2>2*vm)
        {
            if(r3>=vm && r3<=2*vm)
            {
                if(r1>r2 && r2>r3)
                {
                    cout<<r1<<"\n"<<r2<<"\n"<<r3<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<-1<<endl;
    return 0;
}