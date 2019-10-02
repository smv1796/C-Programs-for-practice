#include<iostream>//Header file, used to include some predefined functions which we use in our programs.
#include<string>
#include<bits/stdc++.h>
using namespace std;

bool compDsc(int i,int j)
{
    return i>j;
}

int main()
{
   vector<int> A={2,1,34,89,879,45,3};

   A.erase(A.begin()+3,A.begin()+5);
   for(int i=0;i<A.size();++i)
    cout<<A[i]<<" ";
    cout<<endl;

   sort(A.begin(),A.end(),compDsc);// Third parameter is the name of the comparator function.
     for(int i=0;i<A.size();++i)
    cout<<A[i]<<" ";
    cout<<endl;


}
