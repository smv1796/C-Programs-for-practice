//Linked implementation of stack
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *link;
};
Node *head=NULL;

void push(int x)
{
    Node *p=new Node();
    p->data=x;

        p->link=head;
        head=p;

}

void pop()
{
    if(head==NULL)
    {
        cout<<"Underflow"<<endl;
        return;
    }
    Node *temp;
    temp=head;
    head=head->link;
    delete temp;
}

void top()
{
    if(head==NULL)
        cout<<"Stack is empty."<<endl;
    else{
        cout<<head->data<<endl;;
    }
}

void isEmpty()
{
    if(head==NULL)
        cout<<"Yes, stack is empty."<<endl;
    else
        cout<<"Not empty"<<endl;
}
int main()
{
    top();
    isEmpty();
    push(17);
    push(10);
    push(1994);
    pop();
    pop();
    pop();
    top();

}
