#include<bits/stdc++.h>
 using namespace std;
map< pair< int,int > , int> pp;
int a[100008];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n-2;i++){
        int d,b,c;
        scanf("%d%d%d",&d,&b,&c);
        a[d]++,a[b]++,a[c]++;
        if(d>c)
            swap(d,c);
        if(d>b)
            swap(d,b);
        if(b>c)
            swap(b,c);
        if(pp.count(make_pair(d,b))==0)
            pp.insert(make_pair(make_pair(d,b),c));
        else
            pp.insert(make_pair(make_pair(b,d),c));
        if(pp.count(make_pair(d,c))==0)
            pp.insert(make_pair(make_pair(d,c),b));
        else
            pp.insert(make_pair(make_pair(c,d),b));
        if(pp.count(make_pair(b,c))==0)
            pp.insert(make_pair(make_pair(b,c),d));
        else
            pp.insert(make_pair(make_pair(c,b),d));
    }
    int index=0;
    int gggg,hhhhh;
    bool flag=false;
    for(int i=1;i<=n;i++)
    {
        if(a[i]==1)
         {
          index=i;
         }
         if(a[i]==2)
         {
             if(flag==false)
             {
                 gggg=i;
                 flag=true;
             }
             else
             {
                 hhhhh=i;
             }
         }
    }
    vector<int>ans;
    ans.push_back(index);
    if(pp.count( make_pair(index,gggg) ) ){
        ans.push_back(gggg);
    }
    if(pp.count(make_pair(gggg,index) ) ){
        ans.push_back(gggg);
    }
    if(pp.count( make_pair(index,hhhhh) ) ){
        ans.push_back(hhhhh);
    }
    if(pp.count(make_pair(hhhhh,index) ) ){
        ans.push_back(hhhhh);
    }
    set<int> have;
    have.insert(ans[0]);
    have.insert(ans[1]);
    for(int i=0;i<n-2;i++)
    {
        int sizee=ans.size();
        int val=pp[ make_pair( min(ans[sizee-1],ans[sizee-2]),max(ans[sizee-1],ans[sizee-2]) ) ] ;
        //cout<<"i got it"<<val<<endl;
        if( have.count(val)>0  )
            val=pp[ make_pair( max(ans[sizee-1],ans[sizee-2]),min(ans[sizee-1],ans[sizee-2]) ) ] ;
         //cout<<"i pushed it"<<val<<endl;
        ans.push_back(val);
        have.insert(val);
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}