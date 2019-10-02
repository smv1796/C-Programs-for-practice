#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int sum=0,i=1,j=0;
for(int k=1;k<=n;k++)
{
    int prod=1;
    int p=k;
    while((p)>0)
    {
        prod=prod*i;
        i++;
        p--;
    }
    sum=sum+prod;
}
cout<<sum;
return 0;
}
