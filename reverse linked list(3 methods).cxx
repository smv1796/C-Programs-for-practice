//Reverse a linked list
#include<iostream>
#include<stack>
using namespace std;

struct Node{
    int data;
    Node* link;
};

Node* head=NULL;

void insert(int data, int n)
{

    Node* p=new Node;
    p->data=data;
    p->link=NULL;

    if(n==1)
    {
    p->link=head;
    head=p;
    return;
    }

    Node* temp=head;

    for(int i=1;i<n-1;++i)
        temp=temp->link;//After the loop temp will point to (n-1)th element.

    p->link=temp->link;
    temp->link=p;
    return ;

}

void print(Node* temp)
{

    cout<<temp->data<<" ";
    if(temp->link==NULL)
        return;

     print(temp->link);


}

void rprint(Node* temp)//printing in reverse order.
{


    if(temp->link==NULL)
    {
        cout<<temp->data<<" ";
      return;
    }


     rprint(temp->link);
     cout<<temp->data<<" ";

     return;


}

void Ireverse()//reversal of linked list using iterative approach.
{
    Node *current,*next,*prev;

    current=head;
    next=head;
    prev=NULL;

        if(head==NULL)
        {
            cout<<"List is empty!";
            return;
        }

        while(current!=NULL)
        {
            next=current->link;
            current->link=prev;
            prev=current;
            current=next;
        }

        head=prev;
}

void Rreverse(Node* temp)//Reversal using recursive approach
{
    if(temp->link==NULL)
    {
        head=temp;
        return;
    }

    Rreverse(temp->link);
    temp->link->link=temp;
    temp->link=NULL;
}

void Sreverse(Node* temp)//Reversal of linked list using explicit stack.
{
    temp=head;
    stack<Node*> s;

    while(temp->link!=NULL)
    {
        s.push(temp);
        temp=temp->link;
    }

    head=temp;
    s.push(temp);
    s.pop();//Now s.top will give the second last element in the stack

        while(!s.empty())
        {
            temp->link=s.top();
            temp=temp->link;
            s.pop();

        }

        temp->link=NULL;
        return ;


}

int main()
{
    insert(4,1);
    //print(head);
    insert(5,2);
    insert(3,3);
    insert(6,4);
    insert(8,5);
    cout<<endl;
    //print(head);
    cout<<endl;
    //rprint(head);

    insert(9,4);
    cout<<endl;
    cout<<"print: ";
    print(head);
    cout<<endl;
    cout<<"rprint: ";
    rprint(head);
    Ireverse();//Reversal using iterative approach
    cout<<endl;
    cout<<"print: ";
    print(head);
    cout<<endl;
    cout<<"rprint: ";
    rprint(head);


     Rreverse(head);//Reversal using recursive approach.
    cout<<endl;
    cout<<"print: ";
    print(head);
    cout<<endl;
    cout<<"rprint: ";
    rprint(head);

 Sreverse(head);//Reversal using implicit stack.
    cout<<endl;
    cout<<"print: ";
    print(head);
    cout<<endl;
    cout<<"rprint: ";
    rprint(head);



}
