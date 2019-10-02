//LUCKfour
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n,count=0;
        cin>>n;
        while(n>0)
        {
            if(n%10==4)
                count++;
            n=n/10;
        }
        cout<<count<<endl;
        t--;
    }
}
