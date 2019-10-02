#include<iostream>
#include<vector>
using namespace std;
double solution(vector<int>& A,int& x,int& n)
{
    int endi=0;
    int omax=A[0];
    int imax=A[0];
    double sumE=A[0];//Sum of all the elements
    for(int i=1;i<n;++i)
    {
        sumE+=double(A[i]);
        imax=A[i]+max(imax,0);
        if(omax<imax)
        {
            omax=imax;
            endi=i;
        }
    }


    if(omax<0)
    {
     return sumE;
    }

    int maxSum=0;

    int j=endi;
    int stri;
    double ans=0;
    while(maxSum!=omax)
    {
        maxSum+=A[j];
        if(maxSum==omax)
        {
            stri=j;
            ans=double(maxSum)/x;
        }
        j--;
    }

    for(int i=0;i<n;++i)
    {
        if(stri<=i && i<=endi) continue;
        ans+=double(A[i]);
    }

    return ans;

}
int main()
{

     int n=0,x=0;
     cin>>n>>x;


      vector<int> A(n);
      for(int i=0;i<n;++i)
        cin>>A[i];

      cout<<solution(A,x,n);

}
