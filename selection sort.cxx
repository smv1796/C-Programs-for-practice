//Selection sort(descending)
#include<iostream>
using namespace std;
void selSort(int arr[],int size)
{
    for(int i=0;i<size-1;++i)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]>arr[i])
            {
                 int temp=arr[j];
                 arr[j]=arr[i];
                 arr[i]=temp;
            }
        }
         }


    cout<<endl;
    for(int l=0;l<size;++l)
        cout<<arr[l]<<" ";


}
int main()

{
    int arr[80],size;
    cout<<"Enter array size"<<endl;
    cin>>size;
    cout<<endl<<"Enter elements"<<endl;
    for(int p=0;p<size;p++)
    {
        cin>>arr[p];
        cout<<" ";
    }

    selSort(arr,size);
}
