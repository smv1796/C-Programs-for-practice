#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n,k,tsum=0,wk=0;
        cin>>n;
        int w[n];
        cin>>k;
        for(int i=0;i<n;++i)
        {
            cin>>w[i];
            tsum=tsum+w[i];
        }
        for(int i=0;i<k;++i)
        {
            for(int j=0;j<n-1;j++)
            {
                if(w[j]>w[j+1])
                {
                    int temp=w[j];
                    w[j]=w[j+1];
                    w[j+1]=temp;
                }
            }
            wk=wk+w[i];

        }
        cout<<tsum-(2*wk)<<endl;;
        t--;

    }
}
