#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = nullptr;
    }
};
node* insertAtBegining(node* head){
    node* newhead=new node(0);
    newhead->next=head;
    head=newhead;
    return head;
}
void printlinkedList(node* head){
    node* current = head;
    while(current!=nullptr){
        cout<<current->data<<"->";
        current=current->next;

    }
    cout<<"NULL"<<endl;
}
void deletingNode(node* head){
    node* current=head;
    while(current->next->next!=nullptr){
        current=current->next;
    }
    node* todelete=current->next;
    current->next=todelete->next;
    delete todelete;


}
int main()
{
    node *n1 = new node(1);
    node *n2 = new node(2);
    node *n3 = new node(3);
    n1->next = n2;
    n2->next = n3;
    printlinkedList(n1);
    node* newhead=insertAtBegining(n1);
    printlinkedList(newhead);
    deletingNode(newhead);
    printlinkedList(newhead);



    return 0;
}