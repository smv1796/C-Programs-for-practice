//Calloc, malloc , realloc
#include<iostream>
#include<malloc.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;

      int* A=(int*)calloc(n,sizeof(int));//Dynamically created array of 'n' elements.

      for(int i=1;i<=n;i++)//Filling up of array.
      {
          A[i-1]=i;
      }

      for(int i=0;i<n;i++)
        cout<<"A["<<i<<"]="<<A[i]<<endl;

        A=(int*)realloc(A,2*n*sizeof(int));

        A[8]=17;

         for(int i=0;i<2*n;i++)
        cout<<"A["<<i<<"]="<<A[i]<<endl;
}
