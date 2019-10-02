#include<iostream>
using namespace std;
int main()
{
    float a;
    cout<<"Enter a"<<"\n";
    cin>>a;
    float &b=a;
    b=a--;
    cout<<"a="<<a;
    return 0;
}
