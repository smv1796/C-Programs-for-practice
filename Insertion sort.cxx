//Insertion sort(ascending)
// Time complexity:O(n)
#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter size: ";
    cin>>size;
    int arr[size];
    cout<<"Enter elements"<<endl;
    for(int i=0;i<size;i++)
        cin>>arr[i];
    for(int i=1;i<size;++i)
    {
        for(int j=i;j>0;j--)
        {
            if(arr[j-1]>arr[j])
               {
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
               }

               else break;
        }
    }
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
}
