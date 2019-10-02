#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    cout<<endl;

    while(t>0)
    {
        cin>>n;
        int a[n],sum=0;

        for(int i=0;i<n;++i)
        {
            cin>>a[i];
        }

        for(int i=0;i<n;++i)
        {
            for(int j=0;j<n;j++)
            {
                int x=a[i]^a[j];

                int count=0;
                while(x>0)
                {
                    count++;
                    x=x&(x-1);
                }

                sum=sum+count;
            }

        }
        cout<<sum<<endl;
        t--;
    }
    return 0;
}

