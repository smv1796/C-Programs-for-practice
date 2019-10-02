#include<iostream>
#include<vector>
using namespace std;

void maxHeapifyRecursive(vector<int>& A, int i, int N)
{
    int largest=i;
    int left=2*i, right=2*i+1;

    if(left<=N && A[left]>A[largest])
        largest=left;

    if(right<=N && A[right]>A[largest])
        largest=right;

    if(largest!=i)
    {
        swap(A[largest],A[i]);
        maxHeapifyRecursive(A,largest,N);
    }

}

void maxHeapifyIterative(vector<int>& A, int i, int N)
{

    int left=2*i, right=2*i+1;

    while(left<=N || right<=N)
    {
         int largest=i;

         if(left<=N && A[left]>A[largest])
          largest=left;

         if(right<=N && A[right]>A[largest])
          largest=right;

        if(largest==i)
            break;

        swap(A[i],A[largest]);
        i=largest;
        left=2*i;
        right=2*i+1;



    }


}

void buildHeap(vector<int>& A, int N)
{
    for(int i=N/2;i>=1;i--)
    maxHeapifyIterative(A,i,N);
}


void heapSort(vector<int>& A, int N)
{

    buildHeap(A,N);
    int heapSize=N;// keep this point in mind.
    for(int i=0;i<=N-2;++i)
    {
    swap(A[1],A[N-i]);
    heapSize=heapSize-1;
    maxHeapifyIterative(A,1,heapSize);
    }
}
int main(){
    int k;
    cout<<"No. of elements"<<endl;
    cin>>k;
    int p=k+1;
    vector<int> A(p);//vector of size k+1 is declared.
    A.push_back(0);//We aren't going to use A[0].
    cout<<endl<<"Enter 'k' elements"<<endl;
    for(int i=1;i<=k;++i)
    {
        int ele=0;
        cin>>ele;
        A[i]=ele;

    }


    //buildHeap(A,1,k);
    heapSort(A,k);

    cout<<endl<<"Sorted array"<<endl;
    for(int i=1;i<=k;++i)
        cout<<A[i]<<"   ";
}

