#include<iostream>
using std::cout;
using std::cin;

//declaring linked list node, linked list node has 2 component- data and link to next node and where to start =top/head

struct Node
{
    int data;
    struct Node* link;
};
//initializing Node to a memory reference and assigning it as top
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
    //initialize data into temp with value received as input parameter
    temp->data = data;
    //new temp node link to point to prev top pointer address as we are implementing stack function call 
    temp->link = top;
    //make node temp as top of stack
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
      //save address of top to temp for reference
      temp = top;
      //assign top address to second node address i.e link
      top = top->link;
      //removing connection between first and second by pointing link of top to NULL
      temp->link = NULL;
      //release memory of top node
      free(temp);  
    }
}
//display function to print elements of stack using linked list
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
            //display top node data with -> and point it to next node and keep traversing until it find link = NULL
            cout << temp->data << "-> ";
            temp = temp->link;
        }
    }
}

//driver code for linked list
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