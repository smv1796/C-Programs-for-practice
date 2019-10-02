#include<iostream>
#include<vector>
#include<set>
#include<unordered_map>

using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        if(!nums.size() || !k) return ans;
        multiset<int> S;
        unordered_map<int,int> M;
        for(int i=0;i<k;++i)
        {
            S.insert(nums[i]);
            if(M.find(nums[i])!=M.end())
                M[nums[i]]++;
            else M[nums[i]]=1;
        }


         ans.push_back(*S.rbegin());

       if(nums.size()==1) return ans;
       int l=0,r=k-1;

        while(r<=nums.size()-2)
        {
            if(M[nums[l]]==1)
            {
             S.erase(nums[l]);
              M.erase(nums[l]);
            }
            else M[nums[l]]--;
            l++;
            S.insert(nums[++r]);
            if(M.find(nums[r])!=M.end())
                M[nums[r]]++;
            else M[nums[r]]=1;
            //auto a=S.begin()
            ans.push_back(*S.rbegin());
        }
        return ans;
    }

int main()
{
    int n=0,k=0;
    cin>>n;
    vector<int> A(n,0);
    for(int i=0;i<n;++i)
        cin>>A[i];

    cin>>k;
    vector<int> ans=maxSlidingWindow(A,k);
    for(int i=0;i<ans.size();++i)
        cout<<ans[i]<<" ";
}
