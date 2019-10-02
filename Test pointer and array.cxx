//Name of an array is the pointer to the first element in it.

#include<iostream>
#include<vector>
using namespace std;

int main()
{
   /* vector<int> A;
     A.push_back(9);
     A.push_back(7);
*/

int A[2];
A[0]=9;
A[1]=7;
     int *p=A;// name of an array is the base address of first element in it.
     cout<<A;
     cout<<endl<<*A;
}
