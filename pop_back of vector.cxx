//

#include<iostream>
#include<vector>

using namespace std;

void print(vector<int> &v)
{
  for(int i=0;i<v.size();i++)
    cout<<v[i]<<"\n";
}

int main()
{
    vector<int> v={1,2,3,4};

    print(v);

    v.pop_back();

    print(v);


    return 0;
}
