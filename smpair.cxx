//Smallest pair
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t>0)
    {
        int n;
        cin>>n;
        int arr[n];

        for(int i=0;i<n;++i)
            cin>>arr[i];

        for(int i=0;i<2;++i)
        {
            for(int j=i+1;j<n;++j)
            {
                if(arr[i]>arr[j])
                {
                    int temp=arr[j];
                    arr[j]=arr[i];
                    arr[i]=temp;
                }
            }
        }
        cout<<arr[0]+arr[1]<<endl;
        t--;
    }
}
