//Kitchen table
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;//No. of test cases.
    while(t>0)
    {
        int n=0;
    cin>>n;//No. of students.
     long unsigned int Ai[n], Bi[n];
    for(int i=0;i<n;++i)
    {
        cin>>Ai[i];


        }
        for(int j=0;j<n;++j)
            {
            cin>>Bi[j];

        }
            int count=0,k=n;
       while(k>0)
        {
            if(k=0)
            {
                if(Ai[k]>=Bi[k])
                    count++;
            }
            else
            {
                if((Ai[k]-Ai[k-1])>=Bi[k])
                    count++;
            }
            k--;
        }
        cout<<count;
        t--;
}
}
