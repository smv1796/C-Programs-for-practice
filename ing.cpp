#include<iostream>
#include<vector>
#include<string>
typedef long long ll;
using namespace std;

int ans(vector<string>& S)
{
    vector<int> M(26,0);
    int n=S.size();
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<S[i].size();++j)
        {
            if(S[i][j]=='c' || S[i][j]=='o' || S[i][j]=='d' || S[i][j]=='e' || S[i][j]=='h' || S[i][j]=='f')
                M[S[i][j]-'a']++;
        }
    }

    M['c'-'a']/=2;
    M['e'-'a']/=2;

    int ans=INT_MAX;
    for(int i=0;i<26;++i)
    {
      if(i=='c'-'a' || i=='o'-'a' || i=='d'-'a' || i=='e'-'a' || i=='h'-'a' || i=='f'-'a')
            ans=min(ans,M[i]);
    }

    return ans;
}
int main()
{
    int t=0;
    cin>>t;

    while(t--)
    {
        int n=0;
        cin>>n;
        vector<string> S(n);

        for(int i=0;i<n;++i)
            cin>>S[i];

        cout<<ans(S)<<endl;
    }
}
