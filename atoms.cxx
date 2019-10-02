//Atoms
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int size;
   cin>>size;
   int nums[size];
   for(int i=0;i<size;++i)
   {
       cin>>nums[i];
   }
    for(int i=size-1;i>0;--i)
        {
            if(nums[i]==nums[i-1])
            {
                for(int j=i;j<size-1;++j)
                {
                    int temp=nums[j+1];
                    nums[j+1]=nums[j];
                    nums[j]=temp;
                }
                size--;
            }
        }
        cout<<endl<<size;

}
