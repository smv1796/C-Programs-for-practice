#include<iostream>
#include<vector>
#include<cstdlib>
#include<cstring>
using namespace std;


void display(vector<int>& v)
{
    for(int i=0;i<v.size();++i)
        cout<<v[i]<<" ";
}

bool myComp(int a,int b)
{
    if(a>b)
        return 1;

    else return 0;
}
int main()
{

 int s=12;
 //string a=to_string(s);
}
