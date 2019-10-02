#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void swap(int& a,int& b)
{
    a=a^b;
    b=a^b;
    a=a^b;
}

void twoSmallest(vector<int>& A)
{
    int N=A.size();
    if(!N) return;
    if(N==1)
    {
        cout<<A[0];
        return;
    }

    int smallest1=A[0],smallest2=A[0];

    for(int i=1;i<N;++i)
    {
        if(A[i]<smallest1)
        {
            swap(smallest1,smallest2);
            smallest1=A[i];
        }

        else if(A[i]<smallest2)
            smallest2=A[i];
    }


    cout<<"First smallest"<<smallest1;
    cout<<endl<<"Second smallest"<<smallest2;

}

int main()
{
 int N=0;
 cin>>N;

 vector<int> A(N,0);

for(int i=0;i<N;++i)
{
    int ele=0;
    cin>>ele;
    A[i]=ele;

}
 twoSmallest(A);
 return 0;
}
