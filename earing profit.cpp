#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int maxSeg(int n,int a,vector<int>& C,vector<int>& D)
{
    int ans=0;

    for(int i=0;i<n;++i)
    {
        int maxD=D[i],minD=D[i];
        int cSum=0;
        int profit=0;
        for(int j=i;j<n;++j)
        {
          /*  maxD=max(maxD,D[i]);
            minD=min(minD,D[i]);
            profit+=a-(C[i]+pow((maxD-minD),2));
            ans=max(ans,profit);*/
            maxD=max(maxD,D[j]);
            minD=min(minD,D[j]);
            cSum+=C[j];

            profit=(j-i+1)*a-cSum-((maxD-minD)*(maxD-minD));
            ans=max(profit,ans);
        }
    }
    return ans;
}
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int n=0,a=0;
        cin>>n>>a;
        vector<int> C(n),D(n);

        for(int i=0;i<n;++i)
            cin>>C[i]>>D[i];


        cout<<maxSeg(n,a,C,D)<<endl;
    }
}
