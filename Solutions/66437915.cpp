#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        bool flag=false;
        for(int j=0;j<s.size()-1;j++)
        {
            if(s[j]==s[j+1] && s[j]!='?')
                flag=true;
        }
        if(flag)
        {
            cout<<-1<<endl;
            continue;
        }
        for(int j=0;j<s.size();j++)
        {
            if(s[j]!='?')
            {
                printf("%c",s[j]);
            }
            else
            {
                 set<char> a;
                a.insert('a');
                a.insert('b');
                a.insert('c');
                if(j==0)
                {
                    a.erase(s[1]);
                    printf("%c",(char)*a.begin());
                    s[0]=(char)*a.begin();
                    continue;
                 }
                if(s[j+1]!='?')
                {
                    a.erase(s[j-1]);
                    a.erase(s[j+1]);
                    printf("%c",(char)*a.begin());
                    s[j]=(char)*a.begin();
                }
                else
                {
                    if(s[j+2]=='?')
                    {
                        a.erase(s[j-1]);
                        printf("%c%c",(char)*a.begin(),s[j-1]);
                        s[j]=(char)*a.begin(),
                        s[j+1]=s[j-1];
                    }
                    else
                    {
                        if(s[j-1]!=s[j+2])
                        {
                            a.erase(s[j-1]);
                            a.erase(s[j+2]);
                            printf("%c%c",(char)*a.begin(),s[j-1]);
                            s[j]=(char)*a.begin();
                            s[j+1]=s[j-1];
                        }
                        else
                        {
                            a.erase(s[j-1]);
                            set<char>::iterator it=a.begin();
                            printf("%c",(char)*it);
                            s[j]=(char)*it;
                            it++;
                            printf("%c",(char)*it);
                            s[j+1]=(char)*it;
                        }
                     }
                    j++;
                }
            }
        }
        printf("\n");
    }
    return 0;
}