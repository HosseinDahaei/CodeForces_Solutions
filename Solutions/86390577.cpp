#include<iostream>
using namespace std;
void func()
{
  long long n,m;
  cin>>n>>m;
  long long k=n/m;
  long long sum=0;
  int now1=m%10;
  int now2=m%10;
  int counter=0;
  do
  {
    counter++;
    sum+=now2;
    now2+=m%10;
    now2%=10;
  }while(now2!=now1 && counter<k);
  sum*=k/counter;
  for(int i=0;i<k%counter;i++)
  {
    sum+=now2;
    now2+=m%10;
    now2%=10;
  }
  cout<<sum<<endl;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
      func();
    }
    return 0;
 }