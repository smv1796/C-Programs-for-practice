//PALL01
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
        int o=n;
        int rev=0;
        while(n>0)
        {
            rev=(rev*10)+n%10;
            n=n/10;
        }

        if(rev==o)
            cout<<"wins"<<endl;
        else cout<<"losses"<<endl;
        t--;
    }
}
