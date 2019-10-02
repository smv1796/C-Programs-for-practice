//Square root using binary search
#include<iostream>
using namespace std;
int main()
{
    int mid, pmid=0,A;
    cin>>A;
    int start=1,end=A;

    if(A==0||A==1)
        return A;

    while(start<=end)
    {
        mid=(start+end)/2;
        if(mid*mid==A)
        {
              cout<<mid;
              return 0;
        }



        else if(mid*mid<A)
        {
            start=mid+1;
            pmid=mid;}

        else end=mid-1;
    }
    cout<<pmid;
}
