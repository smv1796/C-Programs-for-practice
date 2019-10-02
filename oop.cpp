#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

class A
{
    protected:
    int y;
    public:
    static int x;
    A()
    {
        x++;
    }

    ~A()
    {
        x--;
    }
};

class C:protected A
{

    int y1;
    public:
    void func()
    {
        x++;
        y=9;
        y1=10;
        cout<<y<<endl;
    }
};
int A::x;
int main()
{
   C c1;
   c1.func();
   double k;
   cout<<A::x;
   cout<<sizeof(A);
   return 0;
}
