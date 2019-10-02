#include<iostream>
#include<stack>
using namespace std;
void func()
{
    static int x=8;
}

int main()
{

  func();
  cout<<x;
  int x=9;
  cout<<x;

return 0;
}
