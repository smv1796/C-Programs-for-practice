//POinters as function arguments

#include<iostream>

using namespace std;

void Double(int arr[], int size)//"int arr[]" is same as "int* arr"
{
     cout<<endl<<"sizeof(arr)/sizeof(arr[0]): "<<size<<endl;

    //for(int i=0;i<size;i++)
      //cout<<2*arr[i];
    //OR
    for(int i=0;i<size;++i)
    cout<<2*(*(arr+i));
}

int main()
{
    int arr[]={1,2,3,4,5};

    cout<<arr;//name of the array stores the "base add."(the add. of the first element in the array.
    cout<<endl<<&arr[0];

    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<endl<<"sizeof(arr)/sizeof(arr[0]): "<<size;
    Double(arr,size);

}
