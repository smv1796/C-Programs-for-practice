#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,d;
    cin>>n;
    cout<<" ";
    cin>>d;
    int arr[n];

    for(int i=0;i<n;++i){
        cin>>arr[i];
        }
        for(int i=1;i<=d;++i)
            {
        int store=arr[0],j=0;
        for(j=0;j<n-1;j++)
        {
            arr[j]=arr[j+1];
        }
        arr[j]=store;
        }

        for(int i=0;i<n;++i)
        cout<<arr[i]<<" ";

    return 0;
}
