#include<unordered_map>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
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

        vector<ll> A(n,0);
        for(int i=0;i<n;++i)
            cin>>A[i];

        if(n==1)
        {
            cout<<A[0];
            continue;
        }
        vector<ll> dp(n,0);
        dp[0]=A[0];
        dp[1]=max(dp[0],A[1]);

        ll ans=max (dp[0],dp[1]);

        for(int i=2;i<n;++i)
        {
            dp[i]=dp[i-1];
            dp[i]=max(dp[i],max(A[i],A[i]+dp[i-2]));
            ans=max(ans,dp[i]);
        }
        cout<<ans<<endl;
    }
}
