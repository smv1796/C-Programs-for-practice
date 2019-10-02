//Standard template library queue
/* Standard functions of queue that are provided with the STL queue in C++.=:
1. q.push()//enqueues an element at the back of queue
2. q.pop()//dequeues an element from the front of the queue
3. q.front()//gives the front element
4. q.back()//gives the back element
*/

#include<iostream>
#include<queue>

using namespace std;

int main()
{
    queue<int> myQ;

    for(int i=1;i<=10;++i)
        myQ.push(i);

    cout<<"Size: "<<myQ.size()<<endl;

    while(!myQ.empty())
    {
        static int i=0;
        cout<<"Dequeuing "<<++i<<endl;
        myQ.pop();

    }

    cout<<endl<<"Size: "<<myQ.size();

    return 0;
}
