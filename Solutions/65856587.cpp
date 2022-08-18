#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void test();
 int main (){
 int n;
 cin>>n;
 for(int i=0;i<n;i++)
    {
        test();
        cout<<endl;
    }
    return 0;
}
void test(){
 int a,b;
 scanf("%d%d",&a,&b);
 if(a==0){
  if(b==0){
   cout<<"YES";
   return ;
  } else {
   cout<<"NO";
   return ;
  }
 }
 if(b>a)swap(a,b);
 if(a>b*2){
  cout<<"NO";
  return ;
 } else {
  if(a==2*b){
   cout<<"YES";
   return ;
  }
  int k = a-b;
  //cout<<a<<b<<k; boos boos
  if(a-2*k<0 || b-k<0){
   cout<<"NO";
   return ;
  }
  a-=2*k;
  b-=k;
  if(a==b && a%3==0){
   cout<<"YES";
   return ;
  } else if(a==1 && b==2) {
   cout<<"YES";
   return ;
  } else if(a==2 && b==1) {
   cout<<"YES";
   return ;
  } else {
   cout<<"NO";
   return ;
  }
 }
 cout<<endl;
}
  