//ATM
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    float x,y;
    cin>>x>>y;
    if(fmod(x,5.0)!=0||(x+0.5)>y)
        cout<<y<<setprecision(2);
    else
        cout<<y-(x+0.5)<<setprecision(2);

}
