//Factorial
#include<iostream>
using namespace std;
int main()
{
    int t,n,f;
    cin>>t;
    while(t>0)
    {
        cin>>n;
        while(n>1);
        {
          f=f*n;
          n--;
        }
        int count=0;
        while(n%10==0)
        {
            count++;
            n=n/10;
        }
        cout<<count;
        t--;


    }
    return 0;
}
