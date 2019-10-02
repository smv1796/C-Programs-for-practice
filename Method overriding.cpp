/*Method overriding

One method is in base class and another method is in derived class and both have same name and function signature. The
one present in the child class will override the on in parent class
*/
#include<iostream>
using namespace std;
class Base
{
public:
   virtual void func()
    {
        cout<<"The one in Base class.\n";
    }
};

class Derived:public Base
{
public:
    void func()
    {
        cout<<"The one n the Derived class.\n";
    }
};

int main()
{
    Base b1;
    Derived d1;
    b1.func();
    d1.func();
}

