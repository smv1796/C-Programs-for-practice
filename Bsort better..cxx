#include<iostream>
#include<vector>
#include<malloc.h>
using namespace std;

void Bsort(vector<int>& V)//Vectors have always to be passed by reference.
{
    int size=V.size();

    for(int i=0;i<size-1;i++)
    {
        int flag=0;
        for(int j=0;j<size-1-i/*Making Bsort better*/;j++)
        {
            int temp=V[j];
            if(V[j]>V[j+1])//Swapping
            {
                flag=1;//Making Bsort better.
                V[j]=V[j+1];
                V[j+1]=temp;
            }

            if (flag==0) break;
        }
    }
}


void print(vector<int>& V)
{
    for(int i=0;i<V.size();i++)
        cout<<V[i]<<" ";
}

int main()
{
   vector<int> V;
   unsigned int size;
   cout<<"Size?"<<endl;
   cin>>size;

   for(int i=0;i<size;++i)
   {
       int element;
       cin>>element;
       V.push_back(element);
   }

   Bsort(V);

   cout<<"Vector after sorting: "<<endl;
   print(V);


    return 0;
}
