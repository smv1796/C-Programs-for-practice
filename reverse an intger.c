#include<iostream>
using namespace std;

int reverse(int n)
{
    int rev=0;

    while(n)
    {
        int r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
}
int main()
{
    int n=0;
    cin>>n;

    cout<<reverse(n);
    return 0;
}
