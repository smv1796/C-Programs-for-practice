#include<iostream>
#include<string>
using namespace std;

#define value 100


class employee
{
    string name;
    int age;

public:
    employee()
    {

    }

    void fillData(string s, int a)
    {
        name=s;
        age=a;
    }

    friend void readData(employee&);
};


void readData(employee& e)
{
    cout<<"\nName "<<e.name;
    cout<<"\nAge "<<e.age;
}



int main()
{

 employee e1;

 e1.fillData("Shubham",20);

 employee e2(e1);

 readData(e1);
 readData(e2);




}
