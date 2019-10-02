//vector as function parameter

#include<iostream>
#include<vector>

using namespace std;

void vectorFill(vector<int>&);//Prototype
void Vp(const vector<int>&);

int main()
{
    vector<int> myVector;
    vectorFill(myVector);

    Vp(myVector);
}

void vectorFill(vector<int> &myVector)
{ cout<<"Type list elements"<<endl;
    int input=0;

    while(input!=-1)//"-1" indicates you want to exit.
        myVector.push_back(input);

}

void Vp(const vector<int> &myVector)
{
    for(unsigned int i=0;i<myVector.size();++i)
     cout<<myVector.at(i)<<" ";
}






