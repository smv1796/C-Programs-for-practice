#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;

int main()
{
    int n=0,m=0;
    cin>>n>>m;
    unordered_map<int,int> MA,MB;// value to index
    vector<int> A(n),B(m);

    for(int i=0;i<n;++i)
     {
        cin>>A[i];
        if(MA.find(A[i])==MA.end())
          MA[A[i]]=i;

     }

    for(int i=0;i<m;++i)
    {
       cin>>B[i];
        if(MB.find(B[i])==MB.end())
          MB[B[i]]=i;
    }
    int counter=m+n-1;
    unordered_set<int> S;
    for(auto a=MA.begin();a!=MA.end();++a)
    {
        for(auto b=MB.begin();b!=MB.end();++b)
        {
            int sum=a->first+b->first;
            if(S.find(sum)==S.end())
            {
                S.insert(sum);
                cout<<a->second<<" "<<b->second<<endl;
                counter--;
                if(counter==0) return 0;
            }
        }
    }




}
