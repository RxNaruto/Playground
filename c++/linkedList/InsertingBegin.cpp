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
int lengthofLinkdedList(node* head){
    node* current=head;
    int count=0;
    while(current!=nullptr){
        count++;
        current=current->next;

    }
    return count;
}
bool searchElement(node* head,int ele){
    node* current=head;
    while(current!=nullptr){
        if(current->data==ele){
            return true;
        }
        current=current->next;

    }
    return false;
    
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
    cout<<"The length of linked list is"<<lengthofLinkdedList(newhead);
    cout<<"The element 5 is "<<searchElement(newhead,2);



    return 0;
}