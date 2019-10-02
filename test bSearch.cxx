#include<iostream>
#include<vector>
using namespace std;

int bSearch(vector<int>& A, int ele)
{
    int end=A.size()-1,start=0;

    int mid=start+(end-start)/2;

    while(start<=end)
    {
        if(A[mid]==ele)
            return mid;
        else if(A[mid]>ele)
            end=mid-1;
        else start=mid+1;
    }

    return -1;
}

int main()
{
    vector<int> A;
    int n;
    cout<<"Enter size\n";
    cin>>n;
    cout<<"Enter elements in ascendng order\n";
    for(int i=0;i<n;++i)
    {
        int ele;
        cin>>ele;
        A.push_back(ele);
    }
    int ele=0;
    cout<<"Enter element to be searched for\n";
    cin>>ele;

    if(bSearch>=0)
        cout<<"Element is found at index number "<<bSearch(A,ele);
    else cout<<"Element isn't present";

    return 0;

}
