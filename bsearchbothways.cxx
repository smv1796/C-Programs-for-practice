//Binary search

#include<iostream>
using namespace std;

int bsearch(int A[],int n, int x)
{
    int start=0,high=n-1;

    while(start<=high)
    {
        int mid=start+(high-start)/2;

        if(A[mid]==x)
            return mid;

        else if(A[mid]>x)
            high=mid-1;

        else
            start=mid++;
    }

    return -1;
}

int main()
{
    int A[]={2,3,7,11,24,27,89,9879,900000};
    int x=0;
    int n=9;
    cout<<"Enter the element to be searched for";
    cin>>x;

    int flag=bsearch(A,9,x);

    if(flag==-1)
    cout<<endl<<"Not found";

    else
        cout<<"Element is found at "<<flag++<<"position";

        return 0;

}
