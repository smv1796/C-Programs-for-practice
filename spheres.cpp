//Speheres codechef
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        int count=0;
        while(n>=1)
        {
            int sq=sqrt(n);
            int rem=n-(sq*sq);
            count++;
            n=rem;
        }
        cout<<count<<endl;
    }

}
