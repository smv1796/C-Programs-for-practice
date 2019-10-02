#include<iostream>
using namespace std;

void f1()
{
cout<<k;
}

void f2()
{
k++;
cout<<k;
}

int main()
{
 static int k;

 f1();
 f2();
}
