//Sorting Algorithms
#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
int *selection(int arr[ ],int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
                swap(arr[i],arr[j]);
        }
    }
    return arr;
}

int *bubble(int arr[],int size)
{
    for(int i=0;i<size;++i)
    {
        for(int j=0;j<size-1;j++)
        {
            if(arr[j+1]<arr[j])
                swap(arr[j],arr[j+1]);

    }
}
return arr;
}

int *insertion(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(arr[j-1]>arr[j])
                swap(arr[j-1],arr[j]);
        }
    }
    return arr;
}
int main()
{
    int size;
    cout<<"Enter size :";
    cin>>size;
    int arr[size],i=0;
    cout<<"Enter the elements"<<endl;
    while(i<size)
    {
        cin>>arr[i];
        ++i;
    }
    insertion(arr,size);
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";

}
