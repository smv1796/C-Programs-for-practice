//Dynamic memory allocation c++
#include<iostream>
using namespace std;

int main()
{
    int *A= (int*)malloc(6*sizeof(int));
    //initilisation of array

    for(int i=0;i<6;++i)
        *(A+i)=2*(i+1);

    //Display

    for(int i=0;i<6;++i)
            cout<<*(A+i);


}
