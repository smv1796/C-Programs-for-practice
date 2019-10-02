//Farmer feb
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t>0)
    {
        int x,y;
        cin>>x;
        cout<<" ";
        cin>>y;

        int z=(x+y),flag=1;
        while(flag==1)
        {
            flag=0;
            z++;
            for(int i=2;i<=z/2;++i)
            {
                if(z%i==0)
                    flag=1;
            }

        }

        cout<<z-(x+y)<<endl;

        t--;
    }
}
