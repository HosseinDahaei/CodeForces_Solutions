#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
     int r2=  (n/m)*b + (n%m)*a ;
    int r3=   ceil((float)n/m)*b;
    cout<<min(min(r2,n*a),r3)<<endl;
       return 0;
}