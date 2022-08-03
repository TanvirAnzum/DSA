#include <iostream>
#define max 100
using namespace std;

class queue {
    int front,rear;
public:
    int arr[max];
    queue() {
        front = 0;
        rear = -1;
    }
    bool push(int val);
    int pop();
    int front_val();
    int rear_val();
};

bool queue::push(int val) {
    if(rear > max - 1) {
        cout<<"OverFlow"<<endl;
        return false;
    }
    else {
        arr[++rear] = val;
        cout<<val<<" is pushed."<<endl;
    }
}

int queue::pop() {
    if(front>rear) {
        cout<<"UnderFlow"<<endl;
        return -1;
    }
    else {
        return arr[front++];
    }
}

int queue::front_val() {
    if(rear<0) return -1;
    return arr[front];
}

int queue::rear_val() {
    if(rear<0) return -1;
    return arr[rear];
}

int main()
{
    queue newQueue;
    newQueue.push(1);
    newQueue.push(2);
    newQueue.push(3);
    cout<<newQueue.front_val()<<" "<<newQueue.rear_val()<<endl;
    cout<<newQueue.pop();
    cout<<endl<<newQueue.front_val();
}
