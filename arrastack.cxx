//Array implementation of stack
#include<iostream>
using namespace std;
int arr[20],top=-1;
void push(int x)
{
    if(top>=x)
    {
        cout<<"Overflow"<<endl;;
    }
    else{
    top++;
    arr[top]=x;
    }
    return;
}

void pop( )
{
    if(top==-1)
        cout<<"Underflow"<<endl;

    top--;
}

void ttop()
{
    if(top==-1)
    cout<<"Empty stack"<<endl;
    else
    cout<<arr[top]<<endl;
}

void isEmpty( )
{
    if(top==-1)
        cout<<"Yes, it's empty"<<endl;
        else
    cout<<"Not empty"<<endl;
}
int main()
{
    ttop();
    isEmpty();
    push(6);
    ttop();
    push(8);
    push(9);
    ttop();
    pop();
    ttop();
    isEmpty();

}
