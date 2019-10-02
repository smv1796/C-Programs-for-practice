//Array implementation of queue
#include<iostream>
#include<iomanip>
using namespace std;
int arr[80];
int front=-1,rear=-1;
void enqueue(int x)
{
    if(front==-1)
    {
        arr[++front]=x;
        rear++;
    }

    else{
           arr[++rear]=x;
    }

}

void dequeue()
{
    if(rear==0)
        front--;

else{
    for(int i=1;i<=rear;++i)
        arr[i-1]=arr[i];
}
    rear--;

}

void print()
{
    if(rear==-1){
    cout<<"Queue is empty. "<<" "<<"front:"<<front<<" "<<"rear:"<<rear;;
    return;
    }

    for(int i=front;i<=rear;++i)
        cout<<arr[i]<<" ";
        cout<<setw(8)<<"front:"<<front<<" "<<"rear:"<<rear;
        cout<<endl;
}


int main()
{
    enqueue(4);
    enqueue(9);
    enqueue(24);
    enqueue(90);
    print();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    print();


}
