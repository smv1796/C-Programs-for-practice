//The sum of digits of a number
#include<iostream>
using namespace std;

int main()
{
    int d;
    int sum=0;

    cin>>d;

    while(d>0)
    {
        sum+=d%10;
        d/=10;
    }

    cout<<sum;

    return 0;
}
