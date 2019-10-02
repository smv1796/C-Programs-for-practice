//Rearrangement in wave form of an array
#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;

void wavesort(int A[], int n)
{
   sort(A, A + n);

int j=1,i=0;

while(j<n)
{
    swap(A[i],A[j]);
    i+=2;
    j=i+1;

}


    for(int i=0;i<n;++i)
            cout<<A[i]<<" ";

            return ;

}
int main()
{
    int t;
    cin>>t;

    while(t>0)
    {
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;++i)
        {
            cin>>A[i];
        }

        wavesort(A,n);


            t--;

    }
}
