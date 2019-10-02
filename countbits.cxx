//countbits
#include<iostream>
#include<string>
using namespace std;
  void countBits(int num) {
        int arr[num+1];
        for(int i=0;i<=num;++i)
        {
            int count=0,j=i;
            while(j>0)
            {
                count++;
                j=j&(j-1);
            }
            arr[i]=count;

        }
        for(int i=0;i<=num;++i)
            cout<<arr[i]<<" ";


    }
int main()
{
    int n;
    cout<<"enter";
    cin>>n;
    int *p;
    countBits(n);/*
    for(int i=0;i<=n;++i)
    {
        cout<<*p<<" ";
        p++;
    }
*/
}
