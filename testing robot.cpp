#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int numPos(string& c, int x)
{
    unordered_set<int> S;
    S.insert(x);
    int ans=1;
    for(int i=0;i<c.size();++i)
    {
        if(c[i]=='L')
            x=x-1;
        else if(c[i]=='R')
            x=x+1;

        if(S.find(x)==S.end())
        {
            ans++;
            S.insert(x);
        }
    }

    return ans;
}
int main()
{
    int t=0;
    cin>>t;

    while(t--)
    {
        int n=0,x=0;
        cin>>n>>x;

        string c;
        for(int i=0;i<n;++i)
        {
            char k;
            cin>>k;
            c.push_back(k);
        }

        cout<<numPos(c,x)<<endl;
    }
}
