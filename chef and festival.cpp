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
        int n=0,k=0;
        cin>>n>>k;

        vector<int> A(n);

        for(int i=0;i<n;++i)
            cin>>A[i];

        int l=0,r=k-1;
        ll mSum=LLONG_MIN;
        ll sum=0;

        for(int i=0;i<k;++i)
            sum+=ll(A[i]);

        mSum=max(mSum,sum);

        while(r<=n-2)
        {
            r++;
            sum+=ll(A[r]-A[l]);
            l++;
            mSum=max(sum,mSum);
        }

        cout<<mSum<<endl;

    }
}
