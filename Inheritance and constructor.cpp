
#include<iostream>
using namespace std;

class Base
{
    string name;
    int age;

    public:
    Base()
    {
        cout<<"Base default constructor";
    }

    Base(string n, int a)
    {
        name=n;
        age=a;

        cout<<name;
        cout<<endl<<age;
    }

     void func()
    {
       // cout<<endl<<a;
        cout<<endl<<"Inside base class";
    }
};

class Derived: public Base
   {
       string sex;
       int rollno;

   public:
    Derived()
    {
        cout<<endl<<"Derived class constructor";
    }

    Derived(string s, int r, string n, int a): Base(n,a)
    {
        sex=s;
        rollno=r;

        cout<<endl<<sex<<endl<<rollno;
    }

    void func()
    {
        cout<<endl<<"Inside derived class";
    }

    } ;

int main()
{
   Base* bp;
   Derived d;
   bp=&d;
   bp->func();
}
