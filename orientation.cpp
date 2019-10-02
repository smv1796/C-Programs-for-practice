#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int main()
{
    int t=0;
    cin>>t;

    while(t--)
    {
        vector<int> X(3),Y(3);

        for(int i=0;i<3;++i)
            cin>>X[i]>>Y[i];

        int slope1=(Y[1]-Y[0])/(X[1]-X[0]);
        int slope2=(Y[1]-Y[2])/(X[1]-X[2]);

        if(slope1>slope2) cout<<"Anti Clockwise"<<endl;
        if(slope1==slope2) cout<<"Linear"<<endl;
        else cout<<"Clockwise"<<endl;


    }
}
