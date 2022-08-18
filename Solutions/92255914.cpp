#include<bits/stdc++.h>
using namespace std;
 int gcd(int a,int b)
{
  if(a==1 || b==1)return 1;
  if(b==0)return a;
  if(a==0) return b;
  if(a>b)swap(a,b);
  b=b%a;
  return gcd(a,b);
}
  void func()
{
  int n;
  cin>>n;
  set<int> arr;
  map<int,int> number;
  for(int i=0;i<n;i++)
  {
      int alaki;
      cin>>alaki;
      arr.insert(alaki);
      number[alaki]++;
  }
  if(n==1)
  {
    cout<<*(arr.begin())<<endl;
    return ;
  }
  int now=0;
  while(arr.size()>0)
  {
    int maxval=1;
    int index=-1;
    for(set<int>::iterator it=--(arr.end());it!=arr.begin();it-- )
    {
      int alaki=gcd(now,*it);
      //cout<<now<<" "<<*it<<" -> "<<alaki<<endl;
      if(alaki>maxval)
      {
        maxval=alaki;
        index=*it;
      }
    }
    int alaki=gcd(now,*(arr.begin()));
    if(alaki>maxval)
    {
      maxval=alaki;
      index=*(arr.begin());
    }
    if(index==-1 )break;
    for(int i=0;i<number[index];i++)
      cout<<index<<" ";
    arr.erase(index);
    now=maxval;
  }
  for(auto u:arr)
  {
    for(int i=0;i<number[u];i++)
      cout<<u<<" ";
  }
  cout<<endl;
 }
  int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
    func();
  return 0;
}