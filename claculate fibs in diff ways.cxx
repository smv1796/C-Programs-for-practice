//Fibonacci

#include<iostream>

using namespace std;


int iFib(int n)
{
    if(n==0 || n==1) return n;

    int a=0,b=1;
    int c;
    for(int i=1;i<=n-1;++i)
    {
        c=a+b;
        a=b;
        b=c;
    }

    return c;
}

int rFib(int n)
{
    if(n==0 || n==1) return n;
    return rFib(n-1)+rFib(n-2);
}

int main()
{
    cout<<"Enter the index of the element whose fibbonaci you need to know\n";
    int n;
    cin>>n;

   cout<<iFib(n);
   cout<<"\n"<<rFib(n);

}
