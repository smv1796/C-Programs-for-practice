#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    int N=0;
    cin>>N;

    vector<int> A(N);
    for(int i=0;i<N;++i)
        cin>>A[i];

    int max1=A[0],max2=INT_MIN;

    for(int i=1;i<N;++i)
    {
        if(A[i]>max1)
            max1=A[i];
    }

    for(int i=0;i<N;++i)
    {
        if(A[i]==max1)continue;
        if(A[i]>max2)
            max2=A[i];
    }

      if(max2==INT_MIN)
      {
         cout<<0;
         return 0;
      }
        int res=max2%max1;
        cout<<res;
}
