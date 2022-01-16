//2//implementing queue data structure using linked list

#include<iostream>
using std::cout;

//declaring linked list node, linked list node has 2 component- data and link to next node and where to start =head/head

struct Node
{
    int data;
    struct Node* link;
};
//initializing Node to a memory reference and assigning it as head and tail
Node* head = NULL;
Node* tail = NULL;
//function to add elements in queue
void push(int data)
{
    Node *tmp = new Node(); 
    tmp->data = data;
    tmp->link = NULL;
    //checking if queue heap is full
    if (!tmp)
    {
        cout << "\nheap overflow";
        exit(1);
    }
    if (head == NULL) {
        head = tmp;
        tail = tmp;
    } else {
        tail->link=tmp;
        tail=tmp;
    }
    
}
bool isEmpty()
{
    if (head == NULL && tail == NULL)
    return true;
    else
    return false;
}
void peek()
{
    if(isEmpty())
    cout << "queue is empty!!" ;
    else
    cout << "element at front " << head->data << "\n";
}
void pop()
{
    //check for queue undeflow
    if (isEmpty())
    {
        cout << "\nqueue is empty";
    }
    else
    {    
     if (head == tail)
     {
     head = tail = NULL;
     free(head);
     }
     else
     {
     Node *tmp = head;
     head = head->link;
     free(tmp);
     }
    }
    
}
//display function to print elements of queue using linked list
void display()
{
    if (isEmpty())
    cout<< "queue is empty\n";
    else
    {
        Node *tmp = head;
        while (tmp != NULL)
        {
            cout<<tmp->data<<"-> ";
            tmp=tmp->link;
        }
    }

}

//driver code for linked list
int main()
{
    //pushing elements in queue
    for(int n=1; n <=10; n++)
    push(n);
    display();
    cout << "\n";
    peek();
    while(!isEmpty())
    {
        pop();
        peek();
    }

    return 0;

}