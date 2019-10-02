//Conversion of binary number into decimal number.

#include<iostream>

using namespace std;

int main()
{
    int n,b=0,r=0,i=1;
    int eqarray[];

    cout<<"Enter decimal #"<<endl;
    cin>>n;

    while(n!=0)
    {
        r=n%2;
        b+=i*r;

        n=n/2;
        i*=10;
    }

    cout<<"Binary equivalent is "<<b;

    return 0;
}



