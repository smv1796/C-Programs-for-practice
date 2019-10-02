#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

bool canInclude(int p,unordered_set<int> S)
{

    while(p)
    {
        int r=p%10;
        if(S.find(r)!=S.end())
            return false;
        p/=10;
    }

    return true;
}
void uninclude(int p, unordered_set<int>& S)
{
    while(p)
    {
        S.erase(p%10);
        p=p/10;
    }
}
void include(int p, unordered_set<int>& S)
{
    while(p)
    {
        S.insert(p%10);
        p/=10;
    }
}


void maxSum(int i,vector<int>& A,unordered_set<int> S,int cs, int& ans)
{
    if(i==A.size()) return;

    bool f=(S.size()<10 && canInclude(A[i],S));

    if(f)
        {
          include(A[i],S);
          cs+=A[i];
          ans=max(ans,cs);
          if(S.size()==10) return;
          maxSum(i+1,A,S,cs,ans);
       }

       if(f)
       {
         uninclude(A[i],S);
         cs-=A[i];
       }

       maxSum(i+1,A,S,cs,ans);
}
int main()
{
    int t=0;
    cin>>t;

    while(t--)
    {
        int n=0;
        cin>>n;

        vector<int> A(n,0);
        for(int i=0;i<n;++i)
            cin>>A[i];

        unordered_set<int> S;
        cout<<ans;
        maxSum(0,A,S,0,ans);
        cout<<ans<<endl;
        cout<<"I am running"<<endl;
    }
    }
