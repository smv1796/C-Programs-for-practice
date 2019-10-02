//Min steps to reach one.

#include<iostream>
using namespace std;

int ways(int n)
{
    if(n==1)
        return 0;

    int a=INT_MAX;
    int b=INT_MAX;
    int c=INT_MAX;

    if(n%2==0)
        a=ways(n/2);
    if(n%3==0)
        b=ways(n/3);

    c=ways(n-1);

    int ans=min(a,b);
    ans=min(ans,c);

    return 1+ans;
}

int main()
{
    int n=0;
    cin>>n;

    cout<<ways(n);
}



