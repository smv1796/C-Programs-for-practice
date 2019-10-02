#include<iostream>
#include<vector>
using namespace std;


int partition(vector<int>& A,int start,int end)
{
    int pIndex=start,pivot=A[end];// Rightmost element is selected as pivot.

    for(int i=start;i<end;++i)
    {
        if(A[i]<=pivot)
        {
            swap(A[i],A[pIndex]);//pIndex will be the starting index of stream having value greater than pivot.....pIndex will generally be lesser than "i"
            pIndex++;
        }
    }

    swap(A[pIndex],A[end]);

    return pIndex;
}

void quickSort(vector<int>& A,int start,int end)
{
    if(start>=end)
        return;//Base condition of recursion.

    int pIndex=partition(A,start,end);

    quickSort(A,start,pIndex-1);
    quickSort(A,pIndex+1,end);
}


int main()
{

int n=0;
  cout<<"Elements";
  cin>>n;

  vector<int> A(n);

  cout<<endl<<"Enter elements";

  for(int i=0;i<n;++i)
  {
    int ele=0;
    cin>>ele;

    A[i]=ele;
  }

  quickSort(A,0,n-1);

  cout<<endl<<"Sorted array(using quick sort) is:"<<endl;



  for(int i=0;i<n;++i)
    cout<<A[i]<<" ";


    return 0;

}
