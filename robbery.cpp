#include<unordered_map>
#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
using namespace std;

int main()
{
    int t=0;
    cin>>t;

    while(t--)
    {
        ll n=0;
        cin>>n;
        vector<bool> A(n,false);
        ll i=1;
        while(i<=n)
        {
            ll j=i+1;

            for(int k=j;k<=n;k=k+j)
            {
                A[k-1]=(!A[k-1]);
            }
            i++;
        }

        ll ans=0;

        for(int i=0;i<n;++i)
        {
            if(A[i])
                ans++;
        }

        cout<<ans<<endl;

    }
}
