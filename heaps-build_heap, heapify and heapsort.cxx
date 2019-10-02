#include<iostream>
#include<algorithm>//to include stl functipons for heap.
using namespace std;


void max_heapify(int A[], int n, int i)//n=size of the array, i=index from which heapifying starts.
{
    int largest=i;
    int left=2*i+1, right=2*i+2;

    if(left<=n-1 && A[left]>A[largest])
        largest=left;

    if(right<=n-1 && A[right]>A[largest])
        largest=right;

    if(largest!=i)
    {
        swap(A[i],A[largest]);
        max_heapify(A,n,largest);
    }

    /*
    while(largest



    */


}


void build_heap(int A[], int n)
{
    for(int i=(n-1)/2-1;i>=0;--i)//Order of n.
        max_heapify(A,n,i);
}

void heap_sort(int A[], int n)
{
    build_heap(A,n);

    for(int i=1;i<=n-1;++i)
    {
        swap(A[0],A[n-i]);
        max_heapify(A,n-i,0);
    }
}


int main()
{

    int n;
    cout<<"Size?: ";
    cin>>n;
    cout<<"Elements?"<<endl;

    int A[n];
    for(int i=0;i<n;++i)
    {
        int ele=0;
        cin>>ele;
        A[i]=ele;
    }

    //heap_sort(A,n);
    sort_heap(A,A+n);
    cout<<endl<<"Sorted array: ";

    for(int i=0;i<n;++i)
        cout<<A[i]<<" ";

    return 0;

}
