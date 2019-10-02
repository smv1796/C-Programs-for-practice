//
#include<bits/stdc++.h>
#include <iostream>
#include<string>
#include<algorithm>
typedef long long ll;
using namespace std;
struct player
{
    public:
    int a,b,c;
    string d;
};
bool comp(const player& p1,const player& p2)
{
   // return false;
    if((p1.a)==(p2.a))
    {
        if((p1.b)==(p2.b))
        {
            if((p1.c)==(p2.c))
            {
                return ((p1.d) < (p2.d));
            }

            else return ((p1.c) < (p2.c));
        }

        else return ((p1.b)<(p2.b));
    }

    return ((p1.a)<(p2.a));
}
void display(vector<player>& P)
{
    for(int i=0;i<P.size();++i)
    {
        cout<<P[i].a<<" "<<P[i].b<<" "<<P[i].c<<" "<<P[i].d<<"\n";
    }
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
        int n=0;
        vector<player> P;
        for(int i=0;i<n;++i)
        {
            int s,l,n1;
            string k;
            cin>>s>>l>>n1>>k;

            player p;

            p.a=s;
            p.b=l;
            p.c=n1;
            p.d=k;
            P.push_back(p);
        }

        sort(P.begin(),P.end(),comp);
        display(P);


    }

    return 0;
}
