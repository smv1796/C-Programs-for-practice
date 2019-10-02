//bSearch
#include<iostream>
using namespace std;

void bSearch(int arr[],int n,int i, int j)
{
    int mid=i+(j-i)/2;
    if(i<=j)
        {
    if(n==arr[mid])
        cout<<"Element found at "<<mid++<<" position";
        else if(n>arr[mid])
            bSearch(arr,n,mid++,j);
        else
        bSearch(arr,n,i,mid--);}
     cout<<"Element not found";
}
int main()
{
    int arr[80],s;
    cout<<"enter size ";
    cin>>s;
    cout<<"Enter array"<<endl;
    int k;
    for(k=0;k<s;k++)
    {
        cin>>arr[k];
        cout<<" ";
    }
    int i=0,j=s-1,n=0;
    cout<<endl<<"Enter the element to be searched"<<endl;
    cin>>n;
    bSearch(arr,n,i,j);

    }

