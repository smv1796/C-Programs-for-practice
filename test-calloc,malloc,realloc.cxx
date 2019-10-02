//Dynamic memory allocation c++
#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int *A= (int*)calloc(6,sizeof(int));
    //initilisation of array

    for(int i=0;i<6;++i)
            cout<<A[i]<<" ";

    for(int i=0;i<6;++i)
        *(A+i)=2*(i+1);

    //Display
   cout<<endl;
    for(int i=0;i<6;++i)
            cout<<A[i]<<" ";


  int *p= (int*)realloc(A,8*sizeof(int));


  cout<<endl;

  for(int i=0;i<8;++i)
    cout<<p[i]<<" ";

   cout<<endl<<"ADD. of A="<<A;
  cout<<endl<<"ADD. of p="<<p;

}
