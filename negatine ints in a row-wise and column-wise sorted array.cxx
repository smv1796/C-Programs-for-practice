#include<iostream>
#include<vector>
// Memory in "vectors" is dynamically allocated ie during run-time.
using namespace std;

void fillMatrix(vector<vector<int> > &matrix,int m, int n)
{
    int value;
    for(int i=0;i<m;++i)
    {
        for(int j=0;j<n;j++)
        {
           cin>>value;
        matrix[i][j]=value;
        }

    }
}

int main()
{
    vector<vector<int> > matrix;
    unsigned int m=0,n=0;
    cout<<"Enter # the row and coloumn."<<endl;
    cin>>m>>n;

    cout<<endl<<"Enter the elements column-wise"<<endl;

    fillMatrix(matrix,m,n);
}
