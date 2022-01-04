#include <iostream>
using std::cout;
using std::cin;
#define MAX 10

class Queue {
    public:
    int front, rear, size;
    int arr[MAX];

    Queue() { front = -1; rear = -1;}
    void Enque(int val);
    void Deque();
    int Display();
};

void Queue::Enque(int val){
    if (rear == MAX -1)
    cout << "Queue overflow\n";
    else {
        if (front == -1) {front = 0;}
        arr[++rear] = val;
        cout<< val << " Enqueued into\n";
    }
}

void Queue::Deque(){
    if(front == -1 || front > rear){
        cout << "Queue underflow\n";
        return;
    } 
    if(front == rear){ //resetting queue
        cout<< arr[front] << " Element deleted\n";
        front = -1; 
        rear = -1;
        cout<< "resetting queue now...\n";
    } else {
        cout<< arr[front] << " Element deleted\n";
        front++;
    }
}

int Queue::Display(){
    if(front == -1)
    cout << "Queue is empty\n";
    else {
        int x = arr[front];
        return x;
    }
    return 0;
}

int main(){
    class Queue q;
    for (int n = 0; n <= 10 ; n++)
    q.Enque(n);
    q.Deque(); //first delete
    //print all elements
    while (!(q.front == -1 || q.front > q.rear)){
        //cout<<"front = "<<q.front <<" rear= "<<q.rear<<"\n";
        //cout << q.Display() << "\n";
        q.Deque();
    }
    
    }