//Basic stack implemenatation in CPP
#include<iostream>
using std::cout;
using std::cin;

#define MAX 10

class Stack{
    int top;
    public:
    int a[MAX]; //Stack max size

    Stack() { top = -1; }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
    bool isFull();

};

bool Stack::push(int x)
{
    if ( !Stack::isFull()){
        a[++top] = x;
        cout << x << " pushed into stack\n";
    } else {
        cout << "Stack overflow\n";
    }
    return true;
}

int Stack::pop(){
    if( !Stack::isEmpty()){
        int x = a[top--];
        return x;
    } else {
        cout << "Stack underflow\n";
    }
}

int Stack::peek() {
    if( !Stack::isEmpty()){
        int x = a[top];
        return x;
    }
    return 0;
}

bool Stack::isEmpty() {
    return ( top < 0);
}

bool Stack::isFull() {
    return ( top >= (MAX -1) );
}

//Driver program to test above functions
int main(){
    class Stack s;
    s.push(100);
    s.push(200);
    s.push(300);
    s.push(999);
    cout << s.pop() << " popped from stack\n";
    //print all elements of stack
    cout << "Elements of stacks\n";
    while(!s.isEmpty()){
        cout << s.peek() << " ";
        s.pop();
    }
    return 0;
}