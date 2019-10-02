//Matrix
#include<iostream>
#include<vector>
using namespace std;
int main()
{
   vector<vector<int> > matrix;
   int r=2,c=3;
   for(int i=0;i<r;++i)
   {
       for(int j=0;j<c;j++)
       {
       int element=0;
       cin>>element;
       matrix[i].push_back(element);
       }
   }

   cout<<matrix.size();
}
