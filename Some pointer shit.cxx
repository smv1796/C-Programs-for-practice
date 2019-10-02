#include<iostream>
using namespace std;

int main()
{
    int *p;//p is pointer variable.
     cout<<"Value of p before initialization "<<p;

     int k=99;

     p=&k;//p stores the add of k.

     cout<<endl<<"Value of p after initialization "<<p;

     int** p1=&p;//p1 stores the add of p.

     cout<<endl<<"Add of the pointer p "<<p1;

     cout<<endl<<"Add of k "<<*p1;
     cout<<endl<<"Value of k "<<**p1;
}
