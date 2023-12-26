// Online C++ compiler to run C++ program online
#include <iostream>
#define s 5
using namespace std;



class queue{
    int front,rear;
    int* arr;
    
    public:
    queue()
    {
        arr=new int[s];
        front=-1;
        rear=-1;
    }

    int isfull()
    {
       if(rear==s-1)
       return 1;
       else
       return 0;
    }
    
    int isempty()
    {
        if(front==rear+1||(front==-1&&rear==-1))
       return 1;
       else
       return 0;
    }
    
    void enqueue(int n)
    {
        if(!isfull())
        {
            if(front==-1)
            {
            front++;
            rear++;
            arr[rear]=n;
            }
            else
            {
                rear++;
            arr[rear]=n;
            }
            
        }
        else
        {
            cout<<"queue is full";
        }
        
        
    }
    
    void dequeue()
    {
        if(!isempty())
        {
         front++;   
         cout<<"\nsuccessfully dequeued element";
        }
        else{
            front=-1;
            rear=-1;
            
            cout<<"\nqueue is empty";
        }
    }

};

int main() {
    // Write C++ code here
    queue q;
    q.enqueue(1);
     q.enqueue(1);
      q.enqueue(1);
       q.enqueue(1);
        q.enqueue(1);
 q.dequeue();
 q.dequeue();
 q.dequeue();
 q.dequeue();
 q.dequeue();
 q.dequeue();
 
    return 0;
}