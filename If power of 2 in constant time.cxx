// Power of 2 in constant time.
#include<iostream>

using namespace std;
int main()
{
    int n=0;
    cout<<"Enter the number\n";
    cin>>n;

    n=n&n-1;

    if(n==0) cout<<"1";
    else cout<<"-1";

    return 0;
}
