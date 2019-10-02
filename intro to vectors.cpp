//Vector  in C++ Tutorial
#include<iostream>
#include<vector>//Necessary to include vectors

using namespace std;

int main()
{
    vector<int> myVector;

    myVector.push_back(2);
    myVector.push_back(5);
    myVector.push_back(89);//Push_back adds a value at the end of the vector and resizes it.
    myVector.insert(myVector.begin()+2,12);// returns iterator(pointer) at the beginning of the vector.

    myVector.erase(myVector.begin()+2);//deletes the element at 2nd position.


    myVector.clear();//To clear the whole vector ie to delete all the elements.
    if(myVector.empty())
        cout<<"Vector is empty"<<endl;
    else cout<<"Not empty"<<endl;



    for(unsigned int i=0;i<myVector.size();++i)
    {
        cout<<myVector.at(i)<<" ";// OR myVector(i);
    }

    return 0;
}
