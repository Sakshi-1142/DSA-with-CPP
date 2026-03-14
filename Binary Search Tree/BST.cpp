#include <iostream>;
using namespace std;

class node
{
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *insertIntoBst(node *root, int d)
{
    if (root == NULL)
    {
        root = new node(d);
        return root;
    }

    if (d > root->data)
    {
        root->right = insertIntoBst(root->right, d);
    }
    else
    {
        root->left = insertIntoBst(root->left, d);
    }
    return root;
};

void takeinput(node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        insertIntoBst(root, data);
        cin >> data;
    }
}

int main()
{
    node *root = NULL;

    cout << "Enter a number to insert in BST" << endl;
    takeinput(root);
}