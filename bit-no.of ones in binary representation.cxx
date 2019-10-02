#include<iostream>
#include<string>
#include<math.h>
using namespace std;

void bitonecount(int x)
{
    int onecount=0;

    for(int i=0;i<32;++i)
    {
        if((x&(1<<i))==(1<<i))//((x&(1<<i))!=0)
            onecount++;
    }

    cout<<onecount;
}
int main()
{
    int x,count =0;
    cout<<endl<<"Enter x ";
    cin>>x;

    bitonecount(x);
    return 0;
    /*while(x>0)
    {
         count++;
        x=x&x-1;

    }

    cout<<"No. of ones "<<count;*/
}

