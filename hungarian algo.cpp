#include<iostream>
#include<vector>
#include<string>
typedef long long ll;
using namespace std;

bool ans(vector<vector<int>>& A)
{
    bool flag=true;

    int n=A.size();
    for(int i=0;i<n;++i)
    {
        bool isZero=false;
        for(int j=0;j<n;++j)
        {
            if(A[i][j]==0)
            {
                isZero=true;
                break;
            }

        }
        if(!isZero) return false;
    }

    for(int i=0;i<n;++i)
    {
        bool isZero=false;
        for(int j=0;j<n;++j)
        {
            if(A[j][i]==0)
            {
                isZero=true;
                break;
            }

        }
        if(!isZero) return false;
    }

    return true;
}
int main()
{
    int t=0;
    cin>>t;

    while(t--)
    {
        int n=0;
        cin>>n;
        vector<int> ele(n);
        vector<vector<int>> A(n,ele);

        for(int i=0;i<n;++i)
            for(int j=0;j<n;++j)
            cin>>A[i][j];

        if(ans(A))
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
