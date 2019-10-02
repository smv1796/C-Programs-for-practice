#include<iostream>
#include<vector>
#include<string>
using namespace std;

int subsX(string& S,char& X)
{
    int n=S.size();
    vector<int> C(n);

    int nearestC=n;
    for(int i=n-1;i>=0;--i)
    {
        if(S[i]==X)
            nearestC=i;
        C[i]=nearestC;
    }

    int subs=0;

    for(int i=0;i<n;++i)
        subs+=n-C[i];

    return subs;
}
int main()
{
    int t=0;
    cin>>t;

    while(t--)
    {
        int N=0;
        cin>>N;

        string S;
        char X;
        cin>>S>>X;

        cout<<subsX(S,X)<<endl;
    }
    return 0;

}
