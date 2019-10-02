//Maximum subsequence


#include<iostream>
#include<bits\stdc++.h>
using namespace std;


void fillA(vector<int>& A, unsigned int& n)
{
    cout<<endl<<"Enter elements";
    for(int i=0;i<n;++i)
    {
        int ele=0;
        cin>>ele;
        A.push_back(ele);
    }
}

int maxSum(vector<int>& A)
{
    int n=A.size();

    int dp1=A[n-1];//max sum if "n-1" index is chosen
    int dp2=0;//max sum if "n-1" isn't chosen

    int i=n-2;

    while(i>0)
    {
        int temp=dp1;
        dp1=A[i]+dp2;
        dp2=max(temp,dp2);
        i--;
    }

    return max(dp1,dp2);
}
int main()
{
    vector<int> A;
    unsigned int n=0;
    cout<<"Size of array?"<<endl;
    cin>>n;
    fillA(A,n);

    cout<<endl<<"Maximum subsequence sum so that no two adjacent elements are selected is: "<<maxSum(A);


}

