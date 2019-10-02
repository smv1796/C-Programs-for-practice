#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int maxColl(vector<int>& A, int k)
{
    int ans=INT_MIN;
    int n=A.size();
    for(int i=0;i<n;++i)
    {
        int j=i;
        int coll=0;
        while(j<n)
        {
            coll+=A[j];
            j+=k;
        }

        ans=max(ans,coll);
    }

    return ans;
}
int main()
{
    int t=0;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;

        vector<int> A(k);
        for(int i=0;i<n;++i)
            cin>>A[i];

        cout<<maxColl(A,k)<<endl;
    }
}
