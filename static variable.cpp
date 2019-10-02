#include<iostream>
using namespace std;
 static int k;
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


 f1();
 f2();
}
