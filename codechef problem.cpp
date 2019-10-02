#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

vector<int> X={1,-1,0,0}, Y={0,0,1,-1};

bool isValid(int p, int q, int r, int c)
{
    return (p>=0 && p<r && q>=0 && q<c);
}
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    int t=0;
    cin>>t;

    while(t--)
    {
        int r=0,c=0;
        cin>>r>>c;

        vector<int> ele(c,0);
        vector<vector<int>> g(r,ele);

        for(int i=0;i<r;++i)
        for(int j=0;j<c;++j)
        cin>>g[i][j];

        bool f=true;//stable

        for(int i=0;i<r;++i)
        for(int j=0;j<c;++j)
        {
            int sumn=0;

            for(int k=0;k<4;++k)
            {
                if(isValid(i+X[k],j+Y[k],r,c))
                sumn++;
            }

            if(sumn<=g[i][j])
            {
                f=false;
            }
        }

        if(!f)
        cout<<"Unsatble"<<endl;

        else cout<<"Stable"<<endl;

    }

    return 0;
}
