//
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int main()
{
    int t=0;
    cin>>t;

    while(t--)
    {
      int n=0,k=0;
      cin>>n>>k;

      vector<int> A(n);
      for(int i=0;i<n;++i)
        A[i]=i+1;
      unordered_set<int> S;
      int count=0;
      int i=0;

      while(S.size()!=n-1)
      {
          if(S.find(i)==S.end())
          {
              count++;
              if(count==k)
              {
                  S.insert(i);
                  count=0;
              }
          }

          i=(i+1)%n;
      }

      int ans=0;
      for(int i=0;i<n;++i)
        ans=ans^i;

      for(auto a=S.begin();a!=S.end();++a)
          ans=ans^(*a);

      cout<<A[ans]<<endl;
    }

}
