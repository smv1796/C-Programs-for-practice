//Fibonacci Sequence
#include<iostream>
using namespace std;
int main()
{
    unsigned int a=0,b=1,c,n;
    cout<<"How many terms you want in sequence"<<"\n";
    cin>>n;
    if(n=1)
        cout<<a;

    else if(n=2)
        cout<<a<<", "<<b;

    else{

        for(int i=0;i<n-2;++i)
        {
            cout<<", ";
            cout<<a<<", ";
            cout<<b<<", ";
            c=a+b;
            cout<<c;
            a=b;
            b=c;



        }
    }
}



