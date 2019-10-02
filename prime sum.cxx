//Prime sum
#include<iostream>
#include<cmath>
using namespace std;
bool isPrimesum(int n,int k)
{
    if(n<2*k||k==0)
        return false;

    else
        {
            if(k==1)
            {
                for(int i=2;i<sqrt(n);++i)
                {
                    if(n%i==0)
                        return false;
                }
            }

            else if(k==2)
            {
                if(n%2==0)
                    return true;

                else
                {
                    for(int i=2;i<sqrt(n-2);++i)
                {
                    if((n-2)%i==0)
                        return false;
                }
                }

            }

            else
                return true;
        }
        return true;
}
int main()
{
 int n,t,k;
 cin>>t;
 while(t>0)
 {
 cin>>n;
 cin>>k;
 isPrimesum(n,k)?cout<<"Yes!":cout<<"No!";
 t--;
}
}
