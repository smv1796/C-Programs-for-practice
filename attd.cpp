#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;

int main()
{
    int t=0;
    cin>>t;

    while(t--)
    {
        int n=0;
        cin>>n;

        unordered_map<string,int> M;
        vector<string> fn(n),ln(n);
        for(int i=0;i<n;++i)
        {
            string f,l;
            cin>>f;
            cin>>l;
            fn[i]=f;
            ln[i]=l;
            if(M.find(f)==M.end())
                M[f]=1;
            else M[f]++;
        }

        for(int i=0;i<n;++i)
        {
            if(M[fn[i]]==1)
                cout<<fn[i]<<endl;
            else cout<<fn[i]<<" "<<ln[i]<<endl;
        }
    }
}
