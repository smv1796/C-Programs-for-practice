//Subtree removal codechef.cpp
#include<iostream>
#include<vector>
typedef long long ll;
using namespace std;

long long maxP(ll n,vector<vector<ll>> &G,ll parent,vector<ll>& val, ll&X)
{
    ll sum=0;

    for(ll i=0;i<G[n].size();++i)
    {
        if(G[n][i]!=parent)
        sum+=maxP(G[n][i],G,n,val,X);
    }

    return max(-X, val[n-1]+sum);
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll N=0,X=0;
        cin>>N>>X;

        vector<ll> val(N);
        for(int i=0;i<N;++i)
            cin>>val[i];

        vector<vector<ll>> G(N+1);

        for(int i=0;i<N-1;++i)
        {
            ll x,y;
            cin>>x>>y;
            G[x].push_back(y);
            G[y].push_back(x);
        }
     cout<<maxP(1,G,0,val,X)<<endl;

    }
    return 0;
}
