#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
typedef long long ll;

bool isValid(int i, int j, vector<vector<int>>& grid,vector<vector<bool>> visited)
{
    int r=grid.size();
    int c=grid[0].size();

    if(i>=0 && i<r && j>=0 && j<c && !visited[i][j])
        return true;

    return false;


}

void initialise(vector<vector<bool>>& visited,int m,int n)
{

        vector<bool> ele(n,false);

        for(int i=0;i<m;++i)
            visited.push_back(ele);


}
void maxVal(vector<vector<int>>& grid, int i, int j,ll maxvalue, vector<vector<bool>> visited, ll global)
{
    if(!isValid(i,j,grid,visited)) return;

    visited[i][j]=true;
    maxvalue+=grid[i][j];

    if(i==grid.size()-1 && j==grid[0].size()-1)
    global=max(global, maxvalue);

    maxVal(grid, i,j+1,maxvalue,visited,global);//right
    maxVal(grid, i-1,j,maxvalue,visited,global);//up
    maxVal(grid, i+1,j,maxvalue,visited,global);//bottom


}
int main()
{

    int T=0;
    cin>>T;

    while(T)
    {
        int m,n;
        cin>>m;
        cin>>n;
        vector<vector<int>> grid;
        vector<vector<bool>> visited;
        initialise(visited,m,n);
        for(int i=0;i<m;++i)
        {
            vector<int> ele;

            for(int j=0;j<n;++j)
            {
                int val;
                cin>>val;
                ele.push_back(val);
            }
            grid.push_back(ele);
        }
        ll maxvalue=0;
        ll global=0;
        maxVal(grid,0,0,0,visited,0);

        cout<<global<<endl;

        T--;
    }
}
