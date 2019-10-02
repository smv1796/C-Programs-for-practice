//Sort 0s,1s,2s in a single pass

#include<iostream>
#include<vector>
using namespace std;

void sort0_1_2(vector<int>& A)
{
    int n=A.size();
    if(!n) return;

    int low=0,mid=0,high=n-1;

    while(mid<=high)
    {
        if(A[mid]==0)
        {
            swap(A[mid],A[low]);
            mid++;
            low++;
        }

        else if(A[mid]==1) mid++;

        else
        {
            swap(A[mid],A[high]);
            high--;
        }
    }
}

int main()
{
    vector<int> A;
    int n;
    cout<<"Size\n";
    cin>>n;

    cout<<"Elements\n";
    for(int i=0;i<n;++i)
    {
        int ele;
        cin>>ele;
        A.push_back(ele);
    }

    sort0_1_2(A);

     for(int i=0;i<n;++i)
       cout<<A[i]<<" ";
}
