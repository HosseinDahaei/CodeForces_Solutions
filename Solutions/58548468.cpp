#include <bits/stdc++.h>
 using namespace std;
void func(int n);
int brr[10];
int main()
{
    int n;
    cin>>n;
    int k;
    int arr[10];
    fill(arr,arr+10,0);
    fill(brr,brr+10,0);
    for(int i=0;i<n;i++)
    {
        scanf("%1d",&k);
        arr[k]++;
        func(k);
     }
    brr[1]=brr[4]=brr[6]=brr[8]=brr[9]=0;
    /*for(int i=0;i<10;i++)
    {
        cout<<i<<" "<<brr[i]<<endl;
    }*/
    //7
    brr[2]-=4*brr[7];
    brr[3]-=2*brr[7];
    brr[5]-=1*brr[7];
     // 5
    brr[2]-=3*brr[5];
    brr[3]-=1*brr[5];
    //3
    brr[2]-=1*brr[3];
      for(int i=9;i>1;i--)
    {
        for(int j=0;j<brr[i];j++)
            printf("%d",i);
    }
     return 0;
}
void func(int n)
{
    //cout<<"func"<<n<<endl;
    for(int i=1;i<=n;i++)
    {
     int k=i;
     while(k>1)
        {
            for(int j=2;j<10;j++)
            {
                if(k%j==0)
                {
                    brr[j]+=1;
                    k/=j;
                    j=11;
                }
            }
        }
    }
}
 