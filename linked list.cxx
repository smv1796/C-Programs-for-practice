//Linked list
#include<iostream>
#include<stack>
using namespace std;
 struct Node
    {
        int data;
        Node *link;
    };
Node *head=NULL;

void insert(int x,int n)
{
    Node *p=new Node;
    p->data=x;
    p->link=NULL;
    if(n==1)
    {
        p->link=head;
        head=p;
        return;
    }
    Node *temp=head;
    for(int i=1;i<=n-2;++i)
    temp=temp->link;

    p->link=temp->link;
    temp->link=p;
    return;

}

void deletenode(int n)
{
    if(head==NULL)
    {
        cout<<"Underflow";
        return;
    }

    if(n==1)
    {
        Node *temp=head;
        head=head->link;
        delete temp;
        return;
    }
            Node *temp=head;
    for(int i=1;i<n-2;++i)
    {
        temp=temp->link;
    }
    Node *q=temp->link;
    temp->link=temp->link->link;
    delete q;
    return;
}

void delvalue(int val)
{
     while(head->data==val)
        {
            Node *temp=head;
            head=head->link;
            delete temp;
        }
        Node *t=head;
        while(t->link!=NULL)
        {
            if(t->link->data==val)
            {
                Node *u=t->link;
                t->link=u->link;
                delete u;
            }
            t=t->link;
        }

        return;

    }


void print()
{
    Node *temp=head;
    if(head==NULL)
        cout<<"Empty";
    else{
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->link;
    }
    }
    return;
}

void recReverse(Node *p)
{
    if(p->link==NULL)
    {
        head=p;
        return;
    }
    recReverse(p->link);
    Node *q=p->link;
    q->link=p;
    p->link=NULL;
    return;

}

void itReverse( )
{
    Node *current=head,*prev=NULL,*next;
    while(current!=NULL)
    {
        next=current->link;
        current->link=prev;
        prev=current;
        current=next;
    }
    head=prev;
    return;
}

void stackRev()
{
  Node* temp=head;
  stack<Node*> s;

  while(temp->link!=NULL)
  {
      s.push(temp);
      temp=temp->link;
  }

  head=temp;

  while(!s.empty())
  {
      temp=s.top();
      Node *q=temp->link;
      q->link=temp;
      temp->link=NULL;
      s.pop();

  }

}

void rprint(Node *p)
{
    if(p==NULL)
        return;

    rprint(p->link);
    cout<<p->data<<" ";
}
int main()
{
    deletenode(4);
    cout<<endl;
    insert(7,1);
    print();
    cout<<endl;
    insert(8,2);
    print();
    cout<<endl;
    insert(6,1);
    print();
    cout<<endl;
    insert(9,3);
    print();
    cout<<endl;
    deletenode(1);
    print();
    cout<<endl;
    recReverse(head);
    print();
    cout<<endl;
    insert(17,3);
     print();
    cout<<endl;
    rprint(head);
    cout<<endl;
    print();
    cout<<endl;
    itReverse();
    print();
    cout<<endl;
    insert(17,1);
    insert(17,2);
    insert(17,3);
   cout<<"Currently the list is: ";
     print();
   /* cout<<endl;
    deletenode(1);
     deletenode(1);
      deletenode(1);
       deletenode(1); deletenode(1);
        deletenode(1); deletenode(1);
        insert(1,1);
        insert(8,1);
        delvalue(8);

    print();
    */

    stackRev();
     cout<<endl<<"After 'stackRev()' the list is: ";
     print();




}
