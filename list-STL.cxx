#include<iostream>
#include<list>

using namespace std;

int main()
{
    list <int> l1;
    l1.push_back(2);
    l1.push_back(92);
    l1.push_back(90);
    l1.push_back(87);
    l1.push_back(45);

    cout<<l1.size()<<endl;

   list<int>::iterator i=l1.begin();

    for(i=l1.begin();i!=l1.end();++i)
        cout<<*i<<" ";

        cout<<endl<<"Another Scenario"<<endl;

     list<int> *adj;

     adj[0].push_back(1);


    return 0;
}
