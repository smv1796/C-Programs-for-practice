//Linked implementation of queue.
#include<iostream>
using namespace std;
struct Node{
        int data;
        Node *link;
};
  Node *head=NULL,*tail=NULL,*temp;

void enqueue(int x)
{
    Node *p=new Node();
    p->data=x;
    p->link=NULL;
    tail=p;
    if(head==NULL)
    {
        head=p;
    }
    else{
            temp=head;
        while(temp->link!=NULL)
            temp=temp->link;

    temp->link=p;
    }
    return;
}

void dequeue()
{
    if(head==NULL)
        cout<<"Underflow";
    else{
        Node *t=head;
        head=head->link;
        delete t;
        }
        return;
}

void print(Node *temp)
{
    if(temp==NULL)
    {
      return;
    }

    cout<<temp->data<<" ";
    print(temp->link);



}
int main()
{
    print(head);
    enqueue(9);
        dequeue();
        dequeue();
    print(head);

}
