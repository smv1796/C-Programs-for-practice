//Pointer is a variable that stores the address of another variable.
#include<iostream>

using namespace std;

int main()
{
    int a=3;
    int*  p=&a;

    cout<<"Add. of a: "<<p;

     cout<<endl<<p->;//Dereferencing the pointer(i.e to access the value sored at the add. stored by p;
     *p=5;


    char* c;//c is pointer to a character
    //   c=p;//But p is pointer to int(p is int*)

    c=(char*) p;
    cout<<endl<<c;

    *c=2025;
    cout<<endl<<*c;



}
