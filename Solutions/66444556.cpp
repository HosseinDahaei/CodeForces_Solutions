#include<bits/stdc++.h>
using namespace std;
int a[4000*100+10];
int main(){
 int n,t;
 cin>>t;
 int q,g=0,b=0,s=0;
 for(q=0;q<t;q++){
  cin>>n;
  for(int i=1;i<=n;i++){
   cin>>a[i];
  }
  int k=n/2;
  while(a[k]==a[k+1]&&k>3){
   k--;
  }
   if(k<5){
   cout<<"0 0 0"<<endl;
   continue;
  }
  for(int i=1;i<=k;i++){
   if(a[i]!=a[i+1]){
    g=i;
    break;
   }
  }
   if(3*g+2>k){
   cout<<"0 0 0"<<endl;
   continue;
  }
  for(int i=2*g+1;i<=k;i++){
   if(a[i]!=a[i+1]){
    s=i-g;
    break;
   }
  }
  b=k-s-g;
  if(b<=g){
   cout<<"0 0 0"<<endl;
   continue;
  }
  else{
   cout<<g<<" "<<s<<" "<<b<<endl;
  }
 }
    return 0;
}