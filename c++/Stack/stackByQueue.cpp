#include<iostream>
#include<queue>
using namespace std;
class Stack{
    public:
    queue<int>q1;
    queue<int>q2;
    int N;
    Stack(){
        N=0;
    }
    void push(int val){
        q1.push(val);
        N++;
        
    }
    int size(){
        return N;
    }
    void pop(){
        if(q1.empty()){
            return;
        }
        if(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();
        }
    }

}
int main()
{
 return 0;
}