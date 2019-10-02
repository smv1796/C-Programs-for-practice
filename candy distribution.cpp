#include<iostream>
using namespace std;

int main()
{
    int T=0;
    cin>>T;

    while(T--)
    {
        int n=0,m=0,k=0;
        cin>>n>>m>>k;

        int count=0;
        while(n>=m)
        {
          if(n%m==0)
            break;
          else
          {
              n=n-k;
              count++;
          }
        }

        if(n<m)
            cout<<-1<<endl;
        else cout<<count<<endl;
    }
}
