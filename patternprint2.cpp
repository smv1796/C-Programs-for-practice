#include<iostream>
#include<vector>
using namespace std;

void pattern(int n)
{
    int l=1;
    int turn=1;
    for(int i=1;i<=n;++i)
    {


      if(turn%2==0)
      {

           int k=l+i-1;
        for(int j=1;j<=i;++j)
        {


            if(j!=i)
            cout<<k<<"*";

            else
                cout<<k<<endl;
            k--;
            l++;
        }
      }

            else{
                 for(int j=1;j<=i;++j)
                 {
                     if(j!=i)
                     cout<<l<<'*';

                     else
                        cout<<l<<endl;

                     l++;
                 }
            }
          turn++;
        }





}

int main()
{

    cout<<"Enter";
    unsigned int n=0;

    cin>>n;
    pattern(n);

    return 0;
}
