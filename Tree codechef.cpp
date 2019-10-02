#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#include<unordered_set>


void printvec(vector<int>& nodes)
{
    sort(nodes.begin(),nodes.end());

    for(int i=0;i<nodes.size();++i)
    {

        cout<<nodes[i]<<' ';
    }
    cout<<endl;
}
int main()
{
    int T=0;
    cin>>T;

    while(T)
    {
        unordered_set<int> S;
        vector<int> nodes;
        int M=0;
        cin>>M;

        while(M)
        {
            int k,l,r;
            cin>>k;
            cin>>l;
            cin>>r;
            if(S.find(k)==S.end())
            {

                S.insert(k);
                nodes.push_back(k);
            }

            if(l!=-1 && S.find(l)==S.end())
            {
                S.insert(l);
                nodes.push_back(l);
            }

            if(r!=-1 && S.find(r)==S.end())
            {
                S.insert(r);
                nodes.push_back(r);
            }
            M--;


            printvec(nodes);
        }
        T--;

    }

}
