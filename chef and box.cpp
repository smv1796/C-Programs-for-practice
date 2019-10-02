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

        vector<int> A(n,0);
        for(int i=0;i<n;++i)
            cin>>A[i];

        sort(A.begin(),A.end());
        int ans=0;
        for(int i=n-1;i>=1;--i)
        {
            if(A[i]>A[i-1])
                continue;
            else ans++;
        }

        cout<<ans+1<<endl;
    }
}
