#include<iostream>
using namespace std;

void bubble(int A[], int B[], int n)
{
    for(int i=0;i<n-1;++i)
        for(int j=0;j<n-1;++j)
        if(B[j]>B[j+1])
        {
            swap(B[j],B[j+1]);
            swap(A[j],A[j+1]);
        }


        for(int i=0;i<n;++i)
            cout<<A[i]<<" ";

}

int main()
{
    int n=0;
    cout<<"Size\n";
    cin>>n;
    cout<<"\nEnter elements\n";
    int A[n];
    int B[n];
    for(int i=0;i<n;++i)
    {
        int ele=0;
        cin>>ele;
        A[i]=ele;
    }
    cout<<"\nEnter indices\n";
     for(int i=0;i<n;++i)
    {
        int ele=0;
        cin>>ele;
        B[i]=ele;
    }

    cout<<"\nArranged matrix is\n";
    bubble(A,B,n);

}
