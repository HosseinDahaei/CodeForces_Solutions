#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    char ch;
    bool allzero=true;
    vector<char> a,d;
    int b;
    scanf("%1c",&ch);
    while(ch!='.')
    {
        a.push_back(ch);
        scanf("%1c",&ch);
    }
    scanf("%1c",&ch);
    while(ch!='e')
    {
        if(ch!='0') allzero=false;
        d.push_back(ch);
        scanf("%1c",&ch);
    }
    cin>>b;
    // process
    if(a[0]=='0')
    {
        if(allzero)
        {
            printf("0");
         }
        else
        {
            bool started = false;
            int i;
            for(i=0;i<b;i++)
            {
                if(started && i>=d.size())
                {
                    printf("0");
                }
                else if(d[i]!='0' || started)
                {
                    printf("%c",d[i]);
                    started=true;
                }
            }
             bool allzz=true;
            for(int j=i;j<d.size();j++)
            {
                if(d[j]!='0')
                {
                    allzz=false;
                    break;
                }
            }
            if(!allzz)
            {
                if(!started)
                    printf("0");
                printf(".");
                for(;i<d.size();i++)
                    printf("%c",d[i]);
             }
            printf("\n");
         }
    }
    else
    {
        for(int i=0;i<a.size();i++)
        {
        printf("%c",a[i]);
        }
        int i=0;
        for(i=0;i<b;i++)
        {
            if(i<d.size())
                printf("%c",d[i]);
            else
                printf("0");
        }
        bool allzz=true;
        for(int j=i;j<d.size();j++)
        {
            if(d[j]!='0')
            {
                allzz=false;
                break;
            }
        }
        if(!allzz)
        {
            printf(".");
            for(;i<d.size();i++)
                printf("%c",d[i]);
         }
        printf("\n");
    }
       return 0;
}