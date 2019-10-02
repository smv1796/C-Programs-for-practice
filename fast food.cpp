#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
typedef long long ll;
using namespace std;

int main()
{
    int t=0;
    cin>>t;

    while(t--)
    {
        int n=0;
        cin>>n;

        vector<int> A(n),B(n);
        for(int i=0;i<n;++i)
            cin>>A[i];

        for(int i=0;i<n;++i)
            cin>>B[i];

        vector<int> sumAi(n,0),sumBi(n,0);
        //sumAi[n-1]=A[n-1],sumBi[n-1]=B[n-1];
        for(int i=n-1;i>=0;--i)
        {
            sumAi[i]=sumAi[i+1]+A[i];
            sumBi[i]=sumBi[i+1]+B[i];
        }
        cout<<sumBi[0];//debug
        int maxProfit=0;
        bool flag=true;
        for(int i=0;i<n;++i)
          {
              if(A[i]>B[i])
                maxProfit+=A[i];

              else{
                if(sumAi[i]<sumBi[i])
                {
                    maxProfit+=sumBi[i];
                    flag=false;
                }

                else
                    maxProfit+=A[i];
              }

              if(flag==false) break;
          }
        cout<<maxProfit<<endl;
    }
}
