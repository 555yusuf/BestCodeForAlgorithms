#include <iostream>
using namespace std;
template <class var>
class LinkedList
{
private:
    struct Node
    {
        var value;
        Node *next;
    };
    Node *top, *cur;

public:
    LinkedList()
    {
        top = NULL;
    }
    bool IsEmpty()
    {
        return top == NULL;
    }
    void push(var value)
    {
        Node *valuePtr = new Node;
        if (valuePtr == NULL)
        {
            cout << "Stack push cannot allocate memory";
        }
        else
        {
            valuePtr->value = value;
            valuePtr->next = top;
            top = valuePtr;
        }
    }
    void Pop()
    {
        cout << "Pop fnc is run " << endl;
        if (IsEmpty())
            cout << "Stack push cannot allocate memory" << endl;
        else
        {
            Node *temp = top;
            top = top->next;
            temp = temp->next = NULL;
            delete temp;
        }
    }
    void print()
    {
        cout << "Print fnc is run" << endl;
        cur = top;
        if (cur == NULL)
            cout << "Stack push cannot allocate memory" << endl;
        else
        {

            while (cur != NULL)
            {
                cout << cur->value << " ";
                cur = cur->next;
            }
            cout << endl;
        }
    }
    void insertAfter(var value, var newvalue)
    {
        cout << "insertAfter fnc is run" << endl;
        Node *newNode = new Node;
        if (newNode == NULL)
        {
            cout << "Stack push cannot allocate memory" << endl;
            return;
        }
        newNode->value = newvalue;
        cur = top;
        while (cur != NULL && cur->value != value)
        {
            cur = cur->next;
        }
        if (cur == NULL)
        {
            cout << "Can't find the value" << endl;
            delete newNode;
        }
        else
        {
            newNode->next = cur->next;
            cur->next = newNode;
        }
    }
    void PopItem(var valueToDelete)
    {
        cout << "Popitem fnc is run " << endl;
        Node *current = top;
        Node *previous = NULL;
        while (current != NULL && current->value != valueToDelete)
        {
            previous = current;
            current = current->next;
        }
        if (current == NULL)
        {
            cout << "Hata: " << valueToDelete << " listede bulunamadi." << endl;
            return;
        }
        if (previous == NULL) 
        {
            top = top->next; 
        }
        else 
        {
            previous->next = current->next;
        }
    }
};
int main()
{

    LinkedList<int> List1;
    List1.push(10);
    List1.push(15);
    List1.push(25);
    List1.push(43);
    List1.push(412);
    List1.print();
    List1.Pop();
    List1.print();
    List1.insertAfter(25, 31);
    List1.print();
    List1.PopItem(15);
    List1.print();  
    return 0;
}