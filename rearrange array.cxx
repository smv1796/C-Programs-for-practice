//Rearrange array
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
void rearrange(int A[], int n)
{
    for(int i=0;i<n;++i)
    {
        int ind=A[i];
        int inc=(A[ind]%n)*n;
        A[i]+=inc;
    }

    for(int i=0;i<n;++i)
        A[i]/=n;

     for(int i=0;i<n;++i)
        cout<<A[i]<<" ";





}
int main()
{
    int n;
    cin>>n;

    int A[n];

    for(int i=0;i<n;++i)
        cin>>A[i];

    rearrange(A,n);
}
