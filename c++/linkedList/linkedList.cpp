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
int main()
{
    node *n1 = new node(1);
    node *n2 = new node(2);
    node *n3 = new node(3);
    n1->next = n2;
    n2->next = n3;

    return 0;
}