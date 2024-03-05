#include<iostream>
using namespace std;
int n=10;
class stack{
    int* arr;
    int top;

    public:

    stack(){
        
       top = -1;
        arr=new int[n];
    }
 void push(int val){
    if(top==(n-1)){
        cout<<"The stack is full"<<endl;
        return;
    }
    top++;
    arr[top]=val;

 }
 void pop(){
    if(top==-1){
        cout<<"The stack is empty"<<endl;
        return;
    }
    top--;

 }
 int Top(){
    if(top==-1){
        cout<<"The stack is empty"<<endl;
        return -1;
    }
    return arr[top];


 }
 int size(){
    return top;
 }
 bool isEmpty(){
    if(top<0){
        return true;
    }
    return false;
 }

    
};
int main()
{
    stack q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    cout<<"The top is "<<q1.Top()<<endl;
    q1.pop();
    cout<<"The top is "<<q1.Top()<<endl;
     q1.pop();

    cout<<"The top is "<<q1.Top()<<endl;
     q1.pop();
    cout<<"The top is "<<q1.Top()<<endl;
     q1.pop();
     cout<<q1.size()<<endl;
     cout<<q1.isEmpty();


 return 0;
}