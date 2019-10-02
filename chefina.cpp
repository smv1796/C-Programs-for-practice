#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t=0;
    cin>>t;

    while(t--)
    {
        int H,K;
        cin>>H>>K;

        vector<int> S(K),E(K),Q(K);

        for(int i=0;i<K;++i)
        {
            cin>>S[i];
            cin>>E[i];
            cin>>Q[i];
        }


        vector<int> ele(H+1);
        vector<vector<int>> dp(K+1,ele);

        for(int i=0;i<=K;++i)
        {
            for(int j=0;j<=H;++j)
            {
                int dur=S[i-1]-E[i-1];
                if(!i || !j) dp[i][j]=0;


               else if(j-dur<0)
                    dp[i][j]=dp[i-1][j];

                else
                {
                    dp[i][j]=max(dp[i-1][j],Q[i-1]+dp[i-1][j-dur]);
                }
            }
        }

        cout<<dp[K][H];
    }
}
