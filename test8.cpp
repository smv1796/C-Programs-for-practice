#include<iostream>
#include<vector>
using namespace std;


int partition(vector<int>& A, int start, int end)
{
    int pivot=A[end];

    int pIndex=start;

    for(int i=start;i<end;++i)
    {
        if(A[i]<=pivot)
        {
            swap(A[i],A[pIndex]);
            pIndex++;
        }
    }

    swap(A[pIndex],A[end]);

    return pIndex;
}

void QSort(vector<int> &A, int start, int end)
{
    if(start>=end)
        return;

    int pIndex=partition(A,start,end);

    QSort(A,start,pIndex-1);
    QSort(A,pIndex+1,end);
}


int main()
{
    vector<int> A;
    cout<<"Size";
    int n=0;
    cin>>n;

    cout<<"\nElements";

    for(int i=0;i<n;++i)
    {
        int ele=0;
        cin>>ele;
        A.push_back(ele);
    }


        QSort(A,0,n-1);

      for(int i=0;i<n;++i)
            cout<<A[i]<<" ";
}

