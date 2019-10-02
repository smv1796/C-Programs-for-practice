//Implementation of power function

#include<iostream>

using namespace std;

double power(double x, int n)
{
    if(n==0) return 1;

    double y=power(x,n/2);

    if(n%2==0) return y*y;

    else{
        if(y>0)
            return x*y*y;

        else return (y*y)/x;
    }
}
int main()
{
    cout<<"Enter the element\n";
    double x;
    cin>>x;
    cout<<"\nEnter power\n";
    int n;
    cin>>n;

    double ans=power(x,n);
    cout<<ans;

    return 0;
}
