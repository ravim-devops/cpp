#include<iostream>
using std::cout;
using std::cin;

//declaring linked list node

struct Node
{
    int data;
    struct Node* link;
};

struct  Node* top;

//function to add elements in stack
void push(int data)
{
    //create new node temp and allocate memory
    struct Node* temp;
    temp = new Node();
    //checking if stack heap is full
    if (!temp)
    {
        cout << "\nheap overflow";
        exit(1);
    }
    //initialize data into temp
    temp->data = data;
    //top pointer to temp link
    temp->link = top;
    //make temp as top of stack
    top = temp;
}
int isEmpty()
{
    return top == NULL;
}
int peek()
{
    if(!isEmpty())
    return top->data ;
    else
    exit(1);
}
void pop()
{
    struct Node* temp;
    //check for stack undeflow
    if (top == NULL)
    {
        cout << "\nStack underflow";
        exit(1);
    }
    else
    {
      //top to temp
      temp = top;
      //second node to temp
      top = top->link;
      //remove connection b/w first and second
      temp->link = NULL;
      //release memory of top node
      free(temp);  
    }
}
//function to print elements of stack
void display()
{
    struct Node* temp;
    if (top == NULL)
    {
        cout << "\nStack underflow";
        exit(1);
    }
    else
    {
        temp = top;
        while (temp != NULL)
        {
            cout << temp->data << "-> ";
            temp = temp->link;
        }
    }
}

//driver code
int main()
{
    //pushing elements in stack
    for(int n=1; n <=10; n++)
    push(n);
    display();
    cout<< "\ntop element is " << peek() << "\n";
    pop();
    pop();
    display();
    cout << "\n";
    //cout<< "\nTop element is " << peek() << "\n";
    while(!isEmpty())
    {
        cout<< "Top element is " << peek() << "\n";
        pop();
    }

    return 0;

}