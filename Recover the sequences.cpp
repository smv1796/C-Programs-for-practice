#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
bool isCommon(vector<int>& ans, vector<int>& A)
{
    int differences=0;

    for(int i=0;i<A.size();++i)
    {
        if(A[i]!=ans[i])
        {
            differences++;
            if(differences==2)
            return false;
        }
    }

    return true;
}

int mfD(vector<int>& A)
{
    int n=A.size();
   unordered_map<int,int> M;
    int md=0,mf=0;
    for(int i=n-1;i>0;--i)
    {
       int d=A[i]-A[i-1];
       if(M.find(d)!=M.end())
        return d;
       //M[d]++;

       else M[d]=1;

      /* if(M[d]>mf)
       {
           mf=M[d];
           md=d;
       }*/
    }

    /*for(auto a=M.begin();a!=M.end();++a)
    {
        if((a->second)>mf)
        {
            mf=a->second;
            md=a->first;
        }
    }
*/

    return md;
}

void formA(vector<int>& ans,vector<int>& A, int d)
{
    int n=A.size();
    int ind=0;
    for(int i=n-1;i>0;--i)
    {
        if((A[i]-A[i-1])==d)
        {
            ind=i;
            break;
        }
    }

    int j=ind+1,prev=A[ind];
    ans[ind]=A[ind];
    while(j<A.size())
    {
        ans[j]=prev+d;
        prev=ans[j];
        j++;
    }
    j=ind-1;
    int ahead=A[ind];
    while(j>=0)
    {
        ans[j]=ahead-d;
        ahead=ans[j];
        j--;
    }

}

void printvec(vector<int>& ans)
{
    for(int i=0;i<ans.size();++i)
        cout<<ans[i]<<" ";

    cout<<endl;
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
        cin>>n;
        vector<int> A(n,0);
        vector<int> ans(n,0);
        for(int i=0;i<n;++i)
        cin>>A[i];

        if(n==4)
        {
            int d1=A[1]-A[0], d2=A[2]-A[1], d3=A[3]-A[2];

            //case1 d1 is correct
            ans[0]=A[0];
            ans[1]=ans[0]+d1;
            ans[2]=ans[1]+d1;
            ans[3]=ans[2]+d1;

            bool f=true;
            f=isCommon(ans,A);
            if(f)
            {
                printvec(ans);
                break;
            }
           /* unordered_set<int> S;
            S.insert(ans[0]);
             S.insert(ans[1]);
              S.insert(ans[2]);
               S.insert(ans[3]);

              int cm=0;
              for(int i=0;i<4;++i)
              {
                  if(S.find(A[i])!=S.end())
                  cm++;
              }

              if(cm>3)
              {
              printans(ans);
              break;
              }

              //case d2
               //case1 d1 is correct
               cm=0;
               S.clear();*/
            ans[0]=A[1]-d2;
            ans[1]=A[1];
            ans[2]=ans[1]+d2;
            ans[3]=ans[2]+d2;

            f=true;
            f=isCommon(ans,A);
            if(f)
            {
                printvec(ans);
                break;
            }

           /* unordered_set<int> S;
            S.insert(ans[0]);
             S.insert(ans[1]);
              S.insert(ans[2]);
               S.insert(ans[3]);

              int cm=0;
              for(int i=0;i<4;++i)
              {
                  if(S.find(A[i])!=S.end())
                  cm++;
              }

              if(cm>3)
              {
              printans(ans);
              break;
              }

              //case3 d3 is correct
               cm=0;
               S.clear();*/

            ans[2]=A[2];
            ans[3]=ans[2]+d3;
            ans[1]=ans[2]-d3;
            ans[0]=ans[1]-d3;

            f=true;
            f=isCommon(ans,A);
            if(f)
            {
                printvec(ans);
                continue;
            }
          /*  unordered_set<int> S;
            S.insert(ans[0]);
             S.insert(ans[1]);
              S.insert(ans[2]);
               S.insert(ans[3]);

              int cm=0;
              for(int i=0;i<4;++i)
              {
                  if(S.find(A[i])!=S.end())
                  cm++;
              }

              if(cm>=3)
              {
              printans(ans);
              break;
              }*/

        }

        else
        {


           int d=mfD(A);//Potential mistake
          //int d=1;
           //cout<<d<<endl;
            formA(ans,A,d);
            printvec(ans);
        }
    }

    return 0;
}
