#include<iostream>
#include<cmath>
using namespace std;
bool isPowerof3(int n)
{
    float x=(log(n)/log(3));
   float y=x-int(x);
    if(y==0)
        return 1;
    else return 0;


}

int main()
{
    while(9>5){
    int n;
    cout<<"Enter the number to be checked"<<endl;
    cin>>n;
    bool flag=isPowerof3(n);
    (flag==1)?cout<<"It's a 3's power"<<endl:cout<<"It's not a 3's power"<<endl;
    }
}
