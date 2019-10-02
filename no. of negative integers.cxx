//No. of n

#include<bits/stdc++.h>

using namespace std;

void fill_a(int a[][80],int m,int n)
{
    int value=0;
    for(int i=0;i<m;i++)
    {
        cout<<"Row: "<<i<<endl;
        for(int j=0;j<n;j++)
        {
            cin>>value;
            a[i][j]=value;
        }

    }

}
int main()
{
  int m,n;

  cout<<"Enter the no. of rows and coloumn"<<endl;
  cin>>m>>n;

  int a[80][80];

  cout<<"Enter the elements"<<endl;
  fill_a(a,m,n);
}
