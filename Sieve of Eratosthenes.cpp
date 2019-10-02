//Sieve of eratosthenes

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

void sieveofE(int& n)
{
    vector<bool> table(n+1,true);
    table[0]=false;
    table[1]=false;

    for(int i=2;i<=sqrt(n);++i)
        for(int j=2*i;j<=n;j+=i)
           table[j]=false;

    int count=0;

    for(int i=0;i<=n;++i)
        if(table[i]) count++;

    cout<<count<<endl;
}
int main()
{

    int n=0;
    cin>>n;
    sieveofE(n);
}
