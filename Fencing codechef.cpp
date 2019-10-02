#include<iostream>
#include<vector>
#include<string>
#include<set>
using namespace std;
typedef pair<int,int> P;
typedef long long ll;
vector<int> X={-1,1,0,0};
vector<int> Y={0,0,-1,1};

bool ispos(P& a, P& p)
{
    int ra=a.first, rp=p.first;
    int ca=a.second, cp=p.second;

    if(ra<rp)
        return true;
    else if(rp<ra)
        return false;

    else
    {
        if(ca<cp)
            return true;
        else return false;
    }
}
int fencing(set<P>& plants)//return type is int
{
    set<vector<int>> U;//Contains boundaries
    for(auto b=plants.begin();b!=plants.end();++b)
    {
        P p=*b;
        int r=p.first, c=p.second;

        for(int k=0;k<4;++k)
        {
            P a=make_pair(r+X[k],c+Y[k]);
            if(plants.find(a)==plants.end())
            {
                vector<int> ele(4);
               if(ispos(a,p))//tells true if a comes before p or otherwise
                {
                    ele[0]=a.first;
                    ele[1]=a.second;
                    ele[2]=p.first;
                    ele[3]=p.second;
                }

                else
                    {
                    ele[0]=p.first;
                    ele[1]=p.second;
                    ele[2]=a.first;
                    ele[3]=a.second;
                }
                U.insert(ele);
            }
        }
    }

    return U.size();
}
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;

        set<P> plants;//cells containing plants.

        while(k--)
        {
            int r,c;
            cin>>r>>c;
            P p=make_pair(r,c);
            plants.insert(p);
        }

        cout<<fencing(plants);
    }


    return 0;
}
