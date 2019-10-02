//FLOW009
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t>0)
    {
        int q;
        double p;
        double tp;
        cin>>q;
        cout<<" ";
        cin>>p;
        tp=p*q;
        if(q>1000)
            cout<<fixed<<setprecision(6)<<(tp-(tp/10))<<endl;

        else
            cout<<fixed<<setprecision(6)<<tp<<endl;

        t--;
    }
}
