#include<iostream>
#include<vector>
#include<queue>
using namespace std;
typedef pair<int,int> P;

int minDice(vector<int>& step)
{

    queue<P> Q;
    int v=0, d=0;
    if(step[0]!=-1)
    v=step[0];

    P p=make_pair(v,d);
    Q.push(p);
    int ans=0;

    vector<bool> visited(30,false);
    visited[v]=true;
    while(!Q.empty())
    {
        P p=Q.front();
        Q.pop();

        if(p.first==29)
        {
            ans=p.second;
            break;
        }

        for(int i=1;i<=6 && p.first+i<30;++i)
        {
            if(!visited[p.first+i])
            {
                P a;
                visited[p.first+i]=true;
                if(step[p.first+i]!=-1)
                a.first=step[p.first+i];

                else
                a.first=p.first+i;

                a.second=p.second+1;

                Q.push(a);
               // visited[a.first]=true;
            }
        }


    }
     return ans;
}
int main()
 {
	//code
	int t=0;
	cin>>t;
	while(t--)
	{
	    vector<int> step(30,-1);

	    int n=0;
	    cin>>n;

	    for(int i=0;i<n;++i)
	    {
	        int a,b;
	        cin>>a>>b;
	        step[a]=b;
	    }

	    cout<<minDice(step)<<endl;
	}
}
