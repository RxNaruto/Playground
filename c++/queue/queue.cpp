#include<iostream>
using namespace std;
int n=20;
class queue{
    int* arr;
    int front;
    int back;
 public:
    queue(){
        arr=new int[n];
        front=-1;
        back=-1;
    }
    void push(int val){
        if(back==(n-1) || front>back){
            cout<<"The queue is full";
        }
        if(front==-1){
            front++;
        }
        back++;
        arr[back]=val;
    }
    void pop(){
        if(back==-1 || front>back){
            cout<<"The queue is empty"<<endl;
        }
        front++;

    }
    int peek(){
         if(back==-1 || front>back){
            cout<<"The queue is empty"<<endl;
            return -1;
        }
        return arr[front];

    }


};
int main()
{
    queue q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);

    cout<<"The top element in queue is"<<q1.peek()<<endl;
    q1.pop();
    cout<<"The top element in queue is"<<q1.peek()<<endl;
    q1.pop();
    cout<<"The top element in queue is"<<q1.peek()<<endl;
    q1.pop();
    cout<<"The top element in queue is"<<q1.peek()<<endl;
    q1.pop();
    cout<<"The top element in queue is"<<q1.peek()<<endl;
    q1.pop();



 return 0;
}