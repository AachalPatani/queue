#include <iostream>
#define s 5
using namespace std;

class queue {
    int front, rear;
    int* arr;

public:
    queue() {
        arr = new int[s];
        front = -1;
        rear = -1;
    }

    int isfull() {
        if ((rear + 1) % s == front)
            return 1;
        else
            return 0;
    }

    int isempty() {
        if (front == rear + 1 || (front == -1 && rear == -1))
            return 1;
        else
            return 0;
    }

    void enqueue(int n) {
        if (!isfull()) {
            if (front == -1)
                front = 0;

            rear = (rear + 1) % s;
            arr[rear] = n;
        } else {
            cout << "queue is full";
        }
    }

    void dequeue() {
        if (!isempty()) {
            cout << "\nsuccessfully dequeued element: " << arr[front];
            front = (front + 1) % s;

            if (front == (rear + 1) % s) {
                // If the front has caught up with the rear, reset front and rear to -1
                front = -1;
                rear = -1;
            }
        } else {
            cout << "\nqueue is empty";
        }
    }
};

int main() {
    // Write C++ code here
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();

    return 0;
}
