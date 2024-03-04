#include<iostream>
using namespace std;
class queue{

    int *arr;
    int front;
    int back;
    int size;
  
  public:

    queue(){
       size=100;
       front=-1;
       back=-1;
       arr=new int[size];
    }

    void push(int x){
        if(back==size){
            cout<<"The queue is full"<<endl;
            return;
        }
        back++;
        arr[back]=x;
        if(front==-1){
            front++;
        }

    }
    int top(){
        return arr[front];
    }
    int pop(){
        if(front==-1){
            cout<<"The queue is empty"<<endl;
            return -1;
        }
        int x=arr[front];
        front++;
        return x;
    }
    bool empty(){
       return (front>back || front ==-1);;
    }


};
int main()
{
    queue q1;
    q1.push(1);
     q1.push(2);
      q1.push(3);
       q1.push(4);
       cout<<"The top most element of queue is"<<q1.top()<<endl;
       cout<<"The element deleted from the queue is "<<q1.pop()<<endl;
       cout<<"The top most element of queue is"<<q1.top()<<endl;
       cout<<"The element deleted from the queue is "<<q1.pop()<<endl;
       cout<<"The size of queue is "<<q1.empty()<<endl;
 return 0;
}