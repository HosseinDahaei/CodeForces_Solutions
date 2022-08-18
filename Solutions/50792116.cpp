#include <iostream>
 using namespace std;
 int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int students[n];
    int schools[n];
    for(int i =0 ; i<n;i++)
    {
        cin >> students[i];
    }
    for(int i =0 ; i<n;i++)
    {
        cin >> schools[i];
    }
    int cheat[k];
    //cout<<"hh"<<endl;
    for(int i=0;i<k;i++)
    {
        cin >> cheat[i];
    }
    //cout<<"kkkk"<<endl;
    int result[m];
    for(int i =1;i<=m;i++)
    {
        int max=0;
        int index_max=0;
        for(int j =0;j<n;j++)
        {
           if(schools[j]==i)
           {
              if(students[j]>max)
              {
                  max = students[j];
                  index_max = j;
              }
           }
        }
        result[i-1] = index_max+1;
    }
    int sum=0;
    for(int i =0;i<k;i++)
    {
       for(int j=0;j<m;j++)
       {
           if(cheat[i] == result[j])
           {
               sum++;
               break;
           }
       }
    }
    /*for(int i =0;i<m;i++)
    {
        cout <<"result[i]: " << result[i]<< endl;
    }
    cout << "sum: " << sum << endl;*/
    cout << k-sum<< endl;
     return 0;
}