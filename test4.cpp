#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int abs(int v)
{
    if(v>0) return v;
    else return -v;
}

void fillGrid(vector<vector<int> >& A)
{
    int n=A[0].size();

    A[0][2]=A[0][5]=1;
    A[1][2]=A[1][3]=A[1][4]=A[1][5]=A[1][6]=A[1][7]=1;
    A[2][2]=A[2][4]=A[2][7]=1;
    A[3][2]=A[3][4]=A[3][7]=1;
    A[4][2]=A[4][3]=A[4][4]=1;
    A[5][1]=A[5][4]=A[5][5]=A[5][6]=A[5][7]=1;


}



int ldis(vector<vector<int> > &A,int x,int y)
{
    int ld=0;
    int n=A[0].size();
    for(int i=0;i<n;++i)
        for(int j=0;j<n;++j)
    {
        if(A[i][j]==1)
        {
            ld=max(ld,abs(x-i)+abs(y-j));
        }
    }

    return ld;
}



int answer(vector<vector<int> > &A)
{
  int n=A[0].size();

  int shortest=INT_MAX;


  for(int i=0;i<n;++i)
  {
      for(int j=0;j<n;++j)
      {
          if(A[i][j]==1)
          {
              int dis=ldis(A,i,j);
              shortest=min(shortest,dis);
          }
      }
  }

  return shortest;

}





int main()
{

    int n=0;
    cout<<"enter the size of grid:"<<" ";
    cin>>n;

    vector<vector<int> > A(n,vector<int>(n,0));

    fillGrid(A);


    cout<<answer(A);



    return 0;

}
