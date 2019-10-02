//returning pointers from a function

#include<iostream>
using namespace std;

int* add(int* x,int*y)//Called function
{
    int c=(*x)+(*y);
    return &c;
}

int main()//Calling function
{
    int a=3,b=2;

    int* sum=add(&a,&b);//Passing the addresses of 'a' and 'b'
    cout<<"Shubham";
    cout<<*sum;
     return 0;

}
