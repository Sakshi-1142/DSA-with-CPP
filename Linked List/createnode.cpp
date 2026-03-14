#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next; // struct pointer

    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

int main()
{

    node *node1 = new node(3);
    node *node2 = new node(4);
    node *node3 = new node(5);
    cout << node1->data << endl;
    cout << node2->data << endl;
    cout << node3->data << endl;
}