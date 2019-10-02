// Program converted to C++

#include<iostream>
#include<vector> //So that we can use vectors in our program.
using namespace std;
const int N=40;

void sum(int& accum, int n, vector<int>& data)
{
    accum=0;

    for(int i=0;i<n;++i)
        accum+=data[i]; //accum is storing the the summation of the elements in the vector.
}

int main()
{
  int i, accum=0;

  vector<int> data(N);

  for(i=0;i<N;++i)
      data[i]=i;

  sum(accum,N,data); //"accum" and the "data" are passed by reference.

  cout<<"Sum is "<<accum<<endl;
  return 0;
}

