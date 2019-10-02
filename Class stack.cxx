//Class stack
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    string s;
    for(int i=0;i<5;++i)
        cin>>arr[i];

    cout<<endl;
    stack <int> s;
    for(int i=0;i<5;++i)
    s.push(arr[i]);

    for(int i=0;i<5;++i)
    {
        arr[i]=s.top();
        s.pop();
    }

    for(int i=0;i<5;++i)
    {
        cout<<arr[i]<<" ";
    }

}
