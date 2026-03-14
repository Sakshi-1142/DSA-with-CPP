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

void inserAthead(node *&head, int d)
{
    node *new_node = new node(d);

    if (head == NULL)
    {
        head = new_node;
    }

    else
    {
        new_node->next = head;
        head = new_node;
    }
}

void printNode(node *&head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    node *node1 = new node(3);

    node *head = node1;

    inserAthead(head, 12);
    printNode(head);
}