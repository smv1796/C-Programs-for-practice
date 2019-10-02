#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


bool comparator(unsigned long long int i,unsigned long long int j)
{
    return(i>j);
}

void display(vector<int>& A)
{
    int N=A.size();

    for(int i=0;i<N;++i)
        cout<<A[i];
}
int main()
{
    int N=0;
    cin>>N;
   // cout<<endl;
    vector<unsigned long long int> A(N,0);
    for(int i=0;i<N;++i)
    {
        unsigned long long int ele=0;
        cin>>ele;
        A[i]=ele;
    }


    sort(A.begin(),A.end(),comparator);

   // display(A);

  unsigned long long int maxRevenue=A[0];

   for(int i=1;i<N;++i)
       maxRevenue=max(maxRevenue,A[i]*(i+1));

   cout<<maxRevenue;
    return 0;
}
