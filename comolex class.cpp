#include<iostream>
using namespace std;

class complex
{
    int r,i;//By default they are private
    static int countObject;//declaration
public:

    complex()
    {
        countObject++;
        r=0;
        i=0;
    }
    void setData(int a, int b)
    {
        r=a;
        i=b;
    }

    void showData();

    ~complex()
    {
        cout<<endl<<"Destructor is called.";
    }

    static void showCount()
    {
        cout<<endl<<countObject;
    }
}c1;

void complex::showData()
{
    cout<<endl<<r<<"+i"<<i;
}
int complex::countObject;//definition
int main()
{
   complex c2;
   c1.showData();
   c2.setData(3,4);
   c2.showData();

   c2.showCount();
   //complex::showCount();
}
