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
int MAXNUMBER;
int MINNUMBER;
int SUM;
Node *NewRoot(int Value)
{
    Node *temp = new Node(Value);
    return temp;
}
void InOrder(Node *root)
{
    if (root != NULL)
    {
        InOrder(root->left);
        cout << root->value << endl;
        InOrder(root->right);
    }
}
void PreOrder(Node *root)
{
    if (root != NULL)
    {
        cout << root->value << endl;
        PreOrder(root->left);
        PreOrder(root->right);
    }
}

void PostOrder(Node *root)
{
    if (root != NULL)
    {
        SUM += root->value;
        if (MINNUMBER > root->value)
            MINNUMBER = root->value;
        if (MAXNUMBER < root->value)
            MAXNUMBER = root->value;

        cout << root->value << endl;
        PostOrder(root->left);
        PostOrder(root->right);
    }
}

int main()
{

    Node *root = new Node(60);
    root->left = NewRoot(20);
    root->right = NewRoot(80);
    root->right->left = NewRoot(70);
    root->right->right = NewRoot(85);
    root->left->right = NewRoot(40);
    root->left->left = NewRoot(10);
    cout << "InOrder " << endl;
    InOrder(root);
    cout << "=================\n";
    cout << "PreOrder " << endl;
    PreOrder(root);
    cout << "=================\n";
    cout << "PostOrder " << endl;
    MAXNUMBER = root->value;
    MINNUMBER = root->value;
    SUM = 0;
    PostOrder(root);
    cout << "=================\n";
    cout << "Max = " << MAXNUMBER <<endl;
    cout << "MIn = " << MINNUMBER<<endl;
    cout << "SUM = " << SUM<<endl;
    
    return 0;
}



