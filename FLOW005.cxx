//FLOW005
#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t>0)
{
    int n=0,p=0,sum=0;
    cin>>n;
    if(n>=100)
    {
        p=n/100;
        n=n-(100*p);
        sum+=p;
    }
    if(n>=50)
    {
        p=n/50;
        n=n-(50*p);
        sum+=p;
    }
    if(n>=10)
    {
        p=n/10;
        n=n-(10*p);
        sum+=p;
    }
    if(n>=5)
    {
        p=n/5;
        n=n-(5*p);
        sum+=p;
    }
    if(n>=2)
    {
        p=n/2;
        n=n-(2*p);
        sum+=p;
    }
    if(n>=1)
    {
        p=n/1;
        n=n-(1*p);
        sum+=p;
    }
    cout<<sum<<endl;
    t--;
}
}
