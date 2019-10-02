#include<iostream>
#include<vector>
typedef long long ll;
using namespace std;

bool mul3(int& d0,int& d1,ll& k)
{
    ll sum=ll(d0+d1);
    ll digitSum=ll(d0+d1);


    for(ll i=1;i<=k-2;++i)
    {
        int di= (digitSum%10);
        digitSum+=ll(di);
        sum+=ll(di);
    }

    if(sum%3==0) return true;
    return false;
}
int main()
{
    int t=0;
    cin>>t;

    while(t--)
    {
         ll k;
        cin>>k;
        int d0,d1;
        cin>>d0>>d1;
        if(mul3(d0,d1,k))
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
