// Unordered_set and unordered_map

#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main()
{
    vector<int> V={1,17,23,0,13,24,17,19,0,1};

    unordered_set<int> S;

    for(int i=0;i<V.size();i++)
    {
      if(S.find(V[i])!=S.end())
        cout<<"Element "<<V[i]<<" is repeated\n";

      else
        S.insert(V[i]);
    }

    V.push_back(89);




    return 0;
}
