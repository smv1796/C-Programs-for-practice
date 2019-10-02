
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
typedef long long ll;

int main()
{
    string s;
    cin>>s;

    int n=s.size();
    if(!n)
    {
        cout<<0;
        return 0;
    }
    unordered_map<char,int> M;
    for(int i=0;i<n;++i)
    {
        if(M.find(s[i])==M.end())
            M[s[i]]=1;
        else M[s[i]]++;
    }



    cout<<M.size();
    return 0;
}
