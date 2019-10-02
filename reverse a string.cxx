//Reverse a string
#include<iostream>
#include<string>
using namespace std;
string reverse(const string &n)
{
    if (n.length() == 1)
        return n;
    else
        return n[n.length() - 1] + reverse(n.substr(0, n.length() - 1));
}
int main()
{


}
