#include<iostream>
#include<string>
using namespace std;

class human
{
    string name;
    unsigned int age;



public:
    void getData(string name, int age)
    {
        (*this).name=name;
        (*this).age=age;


    }

    void display()
    {
        cout<<endl<<name<<endl<<age;
    }

    human()//Initialises the object at the time of its declaration.
    {
        cout<<"Constructor is called"<<endl;
    }

    human operator +(human);//Prototype of operator function
};

human human::operator +(human o)//Operator function which is a member function of the class
{
    human temp;

    temp.name=name+o.name;
    temp.age=age+o.age;

    return temp;
}


int main()
{
    human first,last;
    first.getData("Shubham",15);
    first.display();

   last.getData(" Verma",5);
   last.display();

   human full;
   full=first+last;
   full.display();



}



