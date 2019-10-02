/*Constructor:Initializes the object at the time of their creation.(It provides automatic initialization of objects.)
 >It is called constructor because it constructs the values of data member in the class.
 >A default constructor accepts no parameter.
 >They should be declared in the public section.
 >Constructors cannot be virtual.
*/
#include<iostream>
#include<string>
using namespace std;

class complex
{
    float x,y;

public:
    complex(void)//constructor with no srguments
    {
    }
    complex(float a)
    {
        x=y=a;
    }

    complex(float real, float img)
    {
        x=real;
        y=img;
    }

    friend complex sum(complex,complex);
    friend void show(complex);
};

complex sum(complex c1, complex c2)//Friend of class complex.
{
    complex res;

    res.x=c1.x+c2.x;
    res.y=c1.y+c2.y;

    return res;
}

void show(complex c)//Friend of class complex.
{
    cout<<c.x<<"+i"<<c.y;
}

int main()
{
    complex A(2.7,3.5);
    complex B(1.6);
    complex C;

    C=sum(A,B);

    cout<<"A is ";show(A);
    cout<<"\nB is ";show(B);
    cout<<"\nC is ";show(C);
}
