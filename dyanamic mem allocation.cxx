//Dynamic mem. allocation
#include<iostream>
using namespace std;

int main()
{
    int a=9;//Goes to "stack" section

    int* p=new int;//'p' is storing an add. which is located in "heap" section of memory.
    *p=a;
     delete p;
    cout<<p<<endl;
    cout<<*p;//Dereferencing p



    p=new int;
    cout<<endl<<p;
    cout<<endl<<*p;

    int* k=new int[5];//'k' will point to the first of the "20" bytes that have been allocated.

    cout<<k;

}
