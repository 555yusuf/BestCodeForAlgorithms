#include <iostream>
using namespace std;
struct Node
{
    int value;
    Node *left, *right;
    Node(int _value)
    {
        value = _value;
        left = right = NULL;
    }
};
class BST
{
private:
    Node *root;
    Node *privatePush(Node *Current, int _Value)
    {
        if (Current == NULL)
        {
            return new Node(_Value);
        }
        else if (_Value > Current->value)
        {
            Current->right = privatePush(Current->right, _Value);
        }
        else if (_Value < Current->value)
        {
            Current->left = privatePush(Current->left, _Value);
        }
        return Current;
    }
    void privateInOrder(Node *current)
    {
        if (current == NULL)
            return;
        privateInOrder(current->left);
        cout << current->value << endl;
        privateInOrder(current->right);
    }

public:
    BST()
    {
        root = NULL;
    }
    void push(int value)
    {
        root = privatePush(root, value);
    }
    void InOrder()
    {
        privateInOrder(root);
    }
};

int main(int argc, char const *argv[])
{   
    BST Tree;
    Tree.push(10);
    Tree.push(214);
    Tree.push(423);
    Tree.push(130);
    Tree.push(16);
    Tree.push(13);
    Tree.push(10);
    Tree.push(-12);
    Tree.push(50);
    Tree.push(19);
    Tree.InOrder();

    return 0;
}
