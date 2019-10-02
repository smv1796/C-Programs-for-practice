//Test pointers
//Every byte has a unique address. therefore we can say that computer's memory is byte addressable.
//Pointers are the variables that store the address of another variables. In short, they are the containers that store the address of another
// variable.
// We cannot perform arithmetic on void pointers. We cannot dereference it too, as it is not pointing to any type.
// Name of an array is the pointer to the first element in it.
#include<iostream>
using namespace std;


class A
{
    int x,y;

    friend display(A);

public:
    A(int x, int y)
    {
        this->x=x;
        this->y=y;
    }
};

display(A a)
{
    cout<<a.x<<" "<<a.y;
}
int main()
{

    A a(3,4);
    display(a);

}
