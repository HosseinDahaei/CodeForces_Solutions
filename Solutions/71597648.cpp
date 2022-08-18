#include <bits/stdc++.h>
using namespace std;
 set<int> nodes;
set<int> neigh[100];
set<int> unmarked;
 int components=0;
 void dfs(int index)
{
    //cout<<"call "<<index<<" ";
    unmarked.erase(index);
    for(auto i:neigh[index])
    {
        //cout<<"checking "<<i<<"  ";
        if(unmarked.count(i))
        {
            dfs(i);
        }
    }
}
 void join(char a,char b)
{
    int aa=a-'a';
    int bb=b-'a';
    neigh[aa].insert(bb);
    neigh[bb].insert(aa);
}
 int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
         for(int j=0;j<str.size();j++)
        {
            nodes.insert(str[j]-'a');
            unmarked.insert(str[j]-'a');
        }
        for(int j=0;j<str.size()-1;j++)
            join(str[j],str[j+1]);
    }
     /*for(int i=0;i<10;i++)
    {
        cout<<i<<" : ";
        for(auto j:neigh[i])
            cout<<j<<" ";
        cout<<endl;
    }
    for(auto i:unmarked)
        cout<<i<<" ";
    cout<<endl;*/
    while(unmarked.size())
    {
        components++;
        int a=(int)*unmarked.begin();
        //cout<<"in "<<a<<endl;
        dfs(a);
    }
    cout<<components<<endl;
    return 0;
}
      