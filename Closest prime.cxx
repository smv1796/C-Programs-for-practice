//Closest prime
#include<iostream>
#include<cmath>
using namespace std;
int sprime(int ns)
{
    int flag=0;
    for(int i=2;i<=sqrt(ns);++i)
        if(ns%i==0){
            flag=1;
            break;}

            if(flag==1)
                sprime(ns-1);
    else return ns;
}

int lprime(int nl)
{
    int flag=0;
    for(int i=2;i<=sqrt(nl);++i)
        if(nl%i==0){
        flag=1;
        break;}

        if(flag==1)
            lprime(nl+1);

        else return nl;


}
int main()
{
    int n;
    cin>>n;
    int ns=n-1;
    int nl=n+1;

    int sp=sprime(ns);
    int lp=lprime(nl);

    if((n-sp)==(lp-n))
        cout<<"Closest primes are "<<sp<<" and "<<lp;
    else if((n-sp)<(lp-n))
        cout<<"Closest prime "<<sp;
    else cout<<"Closest prime "<<lp;
}
