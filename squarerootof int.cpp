//Square root of an integer

#include<iostream>
using namespace std;

/*int floorsqrt(int n)
{
    int high=n,low=0,ans=0;

    while(high>=low)
    {
        int mid=low+(high-low)/2;

        if(mid*mid==n)
            return mid;
        else if(mid*mid<n)
        {
            ans=mid;
            low=mid++;
        }

        else
            high=mid--;
    }
    return ans;
}*/
int main()
{
    int n=0;
    cout<<"Enter number"<<endl;
    cin>>n;

    if(n==0||n==1)
        return 1;

     int high=n,low=1,ans=0,i=0;

    while(high>=low)
    {
        cout<<i++<<endl;
        int mid=low+(high-low)/2;

        if(mid*mid==n)
            return mid;

        else if(mid*mid<n)
        {
            ans=mid;
            low=mid++;
        }

        else
            high=mid--;
    }

    cout<<endl<<ans;

    return 0;
}
