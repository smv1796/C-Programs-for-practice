//playing with pointers

#include<iostream>
using namespace std;

int main()
{
    //Allocating dynamic memory to variable. Address of that memory will be stored in a pointer.

    int* ptr=new int[4];

     cout<<ptr<<endl;
     for(int* p=ptr;p<ptr+4;p++)
     {
         cin>>*p;
     }

     int* q=ptr;

     delete[] ptr;

     cout<<ptr<<endl;


     for(int* p=q;p<q+4;p++)
     {
         cout<<*p<<endl;
     }







}
