#include <bits/stdc++.h>
 using namespace std;
int func();
int main()
{
    long long ressult=0;
    string str;
    cin>>str;
    long long zaribjado=0;
    long long sumv=0;
    int onum=0;
    int alaki=0;
    for(int i=0;i<str.size();i++)
    {
        //cout<<"i="<<i<<endl;
        if(str[i]=='v')
        {
            alaki++;
        }
        if(str[i]=='o')
        {
            if(alaki==0 || alaki==1)
            {
                // do nothing
            }
            else // do something
            {
                ressult+=(alaki-1)*zaribjado;
                sumv+=alaki-1;
             }
            alaki=0;
            zaribjado+=sumv;
            onum++;
        }
        if(i== str.size()-1)
        {
            if(alaki==0 || alaki==1)
            {
                // do nothing
            }
            else // do something
            {
                ressult+=(alaki-1)*zaribjado;
                sumv+=alaki-1;
             }
         }
        //cout<<"alaki="<<alaki<<" sumv="<<sumv<<" zaribjado="<<zaribjado<<
        //" onum="<<onum<<" result="<<ressult<<endl;
    }
     cout<<ressult<<endl;
    return 0;
}
  int func()
{
    long long result =0;
    string str;
    cin>>str;
    vector<int> numbers;
    vector<int> onums;
    onums.push_back(0);
    int alaki=0;// number of v
    int onumber=0;
    for(int i=0;i<str.size();i++)
    {
        cout<<"i="<<i<<endl;
        if(str[i]=='v')
        {
             alaki++;
            //cout<<"i found v alaki=";
            //cout<<alaki<<endl;
        }
        if(str[i]=='o' || i==str.size()-1) // o
        {
            //cout<<"i found zero alaki="<<alaki<<endl;
            if(alaki==0 || alaki==1)
            {
                // pass
                alaki=0;
            }
            else
            {
                alaki-=1;
                onums.push_back(onumber);
                for(int j=0;j<numbers.size();j++)
                {
                     int sumo=0;
                    sumo=onums[onums.size()-1]-onums[j+1];
                    //cout<<"sumo = "<<sumo<<endl;
                    result+=alaki*numbers[j]*sumo;
                    cout<<"zarib "<<numbers[j]*sumo<<endl;
                    //cout<<"result+="<<alaki*numbers[j]*sumo<<endl;
                }
                numbers.push_back(alaki);
                 alaki=0;
            }
            if(str[i]=='o')
            {
                onumber++;
            }
         }
    }
    /*for(int i=0;i<numbers.size();i++)
    {
        cout<<numbers[i]<<endl;
    }
    for(int i=0;i<onums.size();i++)
    {
        cout<<onums[i]<<",";
    }
    cout<<endl;*/
    //cout<<"onumber="<<onumber<<endl;
    cout<<result<<endl;
     return 0;
}