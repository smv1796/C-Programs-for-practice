/*This program will show you order of call of constructors and destructors(base class and child class) and
order of execution of constructors ans destructors*/

#include<iostream>
using namespace std;

class Base
{
    public:
    Base()
    {
        cout<<"\n Base class constructor is called";
    }
};

class Derived: Base
{
    Derived
    {
        cout<<"\nDerived class contructor is called";
    }
};

int main()
{
    Derived d;
}
