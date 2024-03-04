#include<iostream>
using namespace std;
class stack{
    int size;
    int* arr;
    int top;

    public:
   stack(){
    top=-1;
   size=100;
   arr= new int[size];
   }

   void push(int x){
    top++;
    arr[top]=x;
   }
   int pop(){
    int x=arr[top];
    top--;
    return x;
   }
   int Top(){
    return arr[top];
   }
   int Size(){
    return top+1;
   }
   


};
int main()
{
    stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    cout<<"The top most element of stack is"<<s1.Top()<<endl;
       cout<<"The element deleted from the stack is "<<s1.pop()<<endl;
       cout<<"The top most element of stack is"<<s1.Top()<<endl;
       cout<<"The element deleted from the stack is "<<s1.pop()<<endl;
       cout<<"The size of stack is "<<s1.Size()<<endl;
    
 return 0;
}