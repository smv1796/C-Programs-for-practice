//GCD of two numbers using Eucliden's algorithm.

#include<iostream>
using namespace std;

int GCD(int a,int b)
{
    if(a<b)
        swap(a,b);


    if(b==0)
        return a;

    else
        return GCD(b,a%b);
}

int main()
{
    unsigned int a=0,b=0;
    cout<<"Enter the numbers ";
    cin>>a>>b;

    cout<<endl<<"GCD is: "<<GCD(a,b);
}
