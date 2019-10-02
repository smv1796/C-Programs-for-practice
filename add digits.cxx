//Add digits..Leetcode
#include<iostream>
using namespace std;
int addDigits(int n){
    int sum=0;
    while(n>=1)
    {
        sum=sum+(n%10);
        n=n/10;
    }

    if (sum>9)
        addDigits(sum);
    else return sum;


}
int main()
{
    int n;

    cout<<"Enter the number ";
    cin>>n;
     cout<<"Answer:"<<addDigits(n);
}
