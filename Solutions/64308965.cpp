#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    int n;
    cin>>n;
    set<int> unrespectable;
    for(int i=1;i<=n;i++)
        unrespectable.insert(i);
    for(int i=1;i<=n;i++)
    {
        int respect,parent;
        scanf("%d %d",&parent,&respect);
        if(respect==0)
            if(unrespectable.count(parent)>0)
                unrespectable.erase(parent);
        if(respect==0)
            if(unrespectable.count(i)>0)
                unrespectable.erase(i);
    }
     if(unrespectable.size()==0)
        cout<<-1<<endl;
    for(set<int>::iterator it=unrespectable.begin();it!=unrespectable.end();it++)
        printf("%d ",(int)*it);
     return 0;
}