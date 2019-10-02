#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{

    vector<int> v={1,4,2,65,3,-1,5};
    sort(v.end(),v.begin());

    for(int i=0;i<v.size();++i)
        cout<<v[i]<<" ";

    return 0;
}


