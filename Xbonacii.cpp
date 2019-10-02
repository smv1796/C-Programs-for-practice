#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
int main()
{
    ll N,Q;
    cin>>N>>Q;

    vector<ll> F(N);

    for(ll i=0;i<N;++i)
        cin>>F[i];


    vector<ll> ans(N);
            ans[0]=F[0];
    if(N>1) ans[1]=F[0];


    for(ll i=2;i<N;++i)
     ans[i]=F[i-1]^ans[i-1];



    cin>>Q;

    while(Q--)
    {
        int k=0;
        cin>>k;

        cout<<ans[k]<<endl;

    }

}
