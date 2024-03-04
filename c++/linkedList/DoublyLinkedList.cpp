#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int val){
        data=val;
        next=nullptr;
        prev=nullptr;
    }
};
node* insertAtEnd(node* head,int val){
    node* current=head;
    while(current->next!=nullptr){
        current=current->next;
    }
    node* newtail=new node(val);
    newtail->prev=current;
    current->next=newtail;
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
node* deleteANode(node* head){
    node* current=head;
    while(current->next!=nullptr){
        current=current->next;
    }
    node* todelete=current;
    todelete->prev->next=todelete->next;
   
    delete todelete;
    return head;
}
void reverseADLL(node* head){
    
}
int main()
{
    node *head = new node(1);
    node *n1 = new node(2);
    node *n2 = new node(3);
    node *tail = new node(4);
    head->next=n1;
    head->prev=nullptr;
    n1->next=n2;
    n1->prev=head;
    n2->next=tail;
    n2->prev=n1;
    printlinkedList(head);
    
    node* newhead=insertAtEnd(head,5);
    printlinkedList(newhead);
    newhead=deleteANode(head);
    printlinkedList(newhead);

    return 0;
}