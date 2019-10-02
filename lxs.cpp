#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;

int LXS(vector<ll>& A, int& n)
{
    vector<int> dp1(n,1);
    vector<ll>dp2(n);
    dp1[0]=1;
    for(int i=0;i<n;++i)
        dp2[i]=A[i];

    int maxlen=1;
    for(int i=1;i<n;++i)
    {
        for(int j=0;j<i;++j)
        {
            if(A[i]^A[j]>=dp2[j] && dp1[i]<(dp1[j]+1))
            {
                dp2[i]=A[i]^A[j];
                dp1[i]=dp1[j]+1;
                maxlen=max(maxlen,dp1[i]);
            }
        }
    }

    return maxlen;
}
int main()
{
    int n=0;
    cin>>n;

    vector<ll> A(n,0);
    for(int i=0;i<n;++i)
    cin>>A[i];

    cout<<LXS(A,n);
}
