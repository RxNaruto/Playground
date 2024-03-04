#include<iostream>
using namespace std;
int n=100;
class stack{
    int* arr;
    int top;
    public:
    stack(){
        arr=new int[n];
        top=-1;

    }
   void push(int x){
    if(top==(n-1)){
        cout<<"Stack overflow"<<endl;
        return;
    }
    top++;
    arr[top]=x;
   }
   void pop(){
    if(top==-1){
        cout<<"The stack is already empty"<<endl;
        return;
    }
    top--;


   }
   int Top(){
    if(top==-1){
        cout<<"The stack is already empty"<<endl;
        return -1;
    }
    return arr[top];

   }
   bool empty(){
    
    return top==-1;
   }


};
int main()
{
    stack s1;
    s1.push(1);
    cout<<"The topmost element in the stack is "<<s1.Top()<<endl;
    
 return 0;
}