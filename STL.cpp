#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> A={100,100,100,100,100};
    bool flag=binary_search(A.begin(),A.end(),100);
    int *p=&A[0],*q=&A[1];
    auto it1=lower_bound(A.begin(),A.end(),100);
    auto it2=upper_bound(A.begin(),A.end(),100);
    //cout<<p<<" "<<q<<endl<<p-q;
    cout<<it2;

}
