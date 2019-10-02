//Merge sort
/* Time complexity: O(nlogn) in worst case.
Space complexity: O(n)

Some points related to merge sort:
1. It is divide and conquer technique.
2. It's a stable sorting algorithm(i.e the relative ordering remains same).
3.Not an in-place sorting algorithm, uses extra space proportional to the no. of elements present in the array.

*/

#include<iostream>
#include<vector>

using namespace std;
void mergeLR(vector<int> &A,vector<int> &L,vector<int> &R)// To merge left and right.
{

    int i=0,j=0,k=0;

    while(i<L.size() && j<R.size())
    {
        if(L[i]<R[j])
        {
            A[k]=L[i];
            i++;
        }

        else{
            A[k]=R[j];
            j++;
        }
        k++;
    }

    while(i<L.size())
    {
        A[k]=L[i];
        i++;
        k++;
    }

    while(j<R.size())
    {
        A[k]=R[j];
        j++;
        k++;

    }
}
void mSort(vector<int> &A)//Recursive merge sort function.
{
    int n=A.size();
    if(n<2) return;

    int mid=n/2;

    vector<int> L(A.begin(),A.begin()+mid),R(A.begin()+mid+1,A.begin()+n-1);

  /*  for(int i=0;i<mid;i++)
    {
        L.push_back(A[i]);
    }



    for(int i=mid;i<A.size();++i)
    {
        R.push_back(A[i]);
    }
*/
    mSort(L);
    mSort(R);

    mergeLR(A,L,R);

}

int main()
{
    int n;
    vector<int> A;
    cout<<"Enter the No. of elements\n";
    cin>>n;

    cout<<"\nEnter elements\n";
    while(n)
    {
        int ele;
        cin>>ele;
        A.push_back(ele);
        n--;
    }

    mSort(A);

    cout<<"\nSorted array:\n";
    for(int i=0;i<A.size();++i)
        cout<<A[i]<<" ";

    return 0;
}
