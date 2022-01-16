//1//implementing queue data structure using linked list

#include<iostream>
using std::cout;

struct Node
{
    int data;
    Node *link;
};

Node *front = NULL;
Node *rear = NULL;

bool isempty(){
    if(front == NULL && rear == NULL)
    return true;
    else
    return false;
}
//function to enter elements in queue LIFO
void enqueue (int value)
{
    Node *ptr = new Node();
    ptr->data = value;
    ptr->link = NULL;
    //inserting first element in queue
    if(front == NULL)
    {
        front = ptr;
        rear = ptr;
    }
    else
    {
        rear->link = ptr;
        rear = ptr;
    }
}
//function to delete
void dequeue (){
    if(isempty())
    cout <<"queue is empty\n";
    else
    //only 1 element in queue
    if(front == rear)
    {
        free(front);
        front = rear = NULL;
    }
    else
    {
        Node *ptr = front;
        front = front->link;
        free(ptr);
    }
}

//functoion to show element at front
void showfront(){
    if(isempty())
    cout<< "queue is empty\n";
    else
    cout<<"element at front is:" <<front->data << "\n";
}

//function to display queue
void display(){
    if(isempty())
    cout << "queueu is empty\n";
    else
    {
        Node *ptr = front;
        while(ptr != NULL)
        {
            cout<<ptr->data<<" ";
            ptr= ptr->link;
        }
    }
}
//driver code for linked list
int main()
{
    //pushing elements in stack
    for(int n=1; n <=10; n++)
    enqueue(n); 
    dequeue();
    dequeue();
    display();
    cout << "\n";
    showfront();
    while(!isempty())
    {
       // cout<< "Top element is " << showfront() << "\n";
        dequeue();
        showfront();
    }

    return 0;

}
