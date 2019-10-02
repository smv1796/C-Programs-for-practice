#include<iostream>
#include<vector>
#include<set>

using namespace std;

bool checkValidity(int a, int b, int c)
{

    if (a + b <= c || a + c <= b || b + c <= a)
        return false;
    else
        return true;
}


int threeSum(vector<int>& A) {
        vector<vector<int>> ans;
        int n=A.size();
        if(n<3) return ans.size();
        int p=n;

        set<vector<int>> S;
        for(int i=n-1;i>1;--i)
        {
            //if(i!=n-1 && A[i]==A[i+1])
            //continue;

            int l=0,r=i-1;
           // int t=-A[i];
            while(l<r)
            {
               /* if(l!=0 && A[l]==A[l-1] && A[r]==A[r+1])
                {
                    l++;
                    r--;
                    continue;
                }*/

                int sum=A[l]+A[r]+A[i];
                if(sum<p)
                    l++;
                else if(sum>p)
                    r--;

                else
                {

                    vector<int> ele(3);
                    ele[0]=A[l];
                    ele[1]=A[r];
                    ele[2]=A[i];
                    if(S.find(ele)==S.end()&& checkValidity(A[l],A[r],A[i]))
                    {
                        ans.push_back(ele);
                        S.insert(ele);
                    }
                    l++;
                    r--;
                }
            }


        }
         return ans.size();
}
int main()
{
    int t=0;
    cin>>t;

    while(t--)
    {
        int p=0;
        cin>>p;

        vector<int> A(p,0);
        for(int i=0;i<p;++i)
            A[i]=i+1;

        cout<<threeSum(A)<<endl;
    }
}
