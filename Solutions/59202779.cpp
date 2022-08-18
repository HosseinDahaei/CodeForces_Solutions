#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    int zero,one;
    int sone;
    cin>>zero>>one;
    sone=one;
    if(zero>one+1 || one>(zero+1)*2 )
    {
        cout<<-1<<endl;
        return 0;
    }
    int arr[zero+1];
    fill(arr,arr+zero+1,0);
     int i=0;
    while(one>0)
    {
        arr[i]++;
        if(arr[i]>2)
        {
            cout<<-1<<endl;
            return 0;
        }
        i++;
        i=i%(zero+1);
        one--;
    }
     if(zero==sone+1)
    {
        //cout<<"YEs"<<endl;
        arr[0]=0;
        for(int i=1;i<zero;i++)
            arr[i]=1;
    }
     for(i=0;i<=zero;i++)
    {
        for(int j=0;j<arr[i];j++)
            printf("1");
         if(i!=zero) printf("0");
    }
    return 0;
}