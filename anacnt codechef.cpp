//anacnt

#include<iostream>
#include<vector>
#include<algorithm>
typedef long long ll;
using namespace std;
#define P pair<int,int>
bool comp(P x, P y)
{
    return (x.first<y.first);
}
int noVisitor(vector<P>& interval)
{
    int n=interval.size();
    if(!n) return 0;

    sort(interval.begin(),interval.end(),comp);

    P a;
    a.first=interval[0].first;
    a.second=interval[0].second;

    int nintervals=0;

    for(int i=1;i<n;++i)
    {
        P p=interval[i];

        if(a.second<=p.first)//Merger
        {
            if(p.second>a.second)
                a.second=p.second;
        }

        else
        {
            a=interval[i];
            nintervals++;
        }
    }

    return nintervals;
}
int main()
{
    int t=0;
    cin>>t;

    while(t--)
    {
        int n=0;
        cin>>n;
        vector<P> interval;
        for(int i=0;i<n;++i)
        {
            P p;
            cin>>p.first;
            cin>>p.second;

            interval.push_back(p);
        }

        cout<<noVisitor(interval)<<endl;
    }
}
