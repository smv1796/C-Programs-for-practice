#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> A(10,9);
    /*int count=0;

    for(int i=0;i<10;++i)
    {
        cout<<A[i]<<endl;
        count++;
    }

    cout<<count;
*/

    vector<int> B(20,0);

    for(int i=0;i<B.size();++i)
        cout<<B[i];

    cout<<endl<<endl;

    resize(A,B);




    return 0;
}
