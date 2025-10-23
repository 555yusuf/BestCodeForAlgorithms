#include <iostream>
using namespace std;
const int Max_Size = 1000;
template <class var>
class Stack
{
private:
    int item[Max_Size];
    int Top;
public:
    // Stack(){
    //     Top = -1;
    // }
    Stack() : Top(-1) {}; // Gosteris sekli
    bool IsEmpty()
    {
        return Top <= -1;
    }
    void PushValue(int value)
    {
        if (Top >= Max_Size - 1)
        {
            cout << "Stack Full on push ";
        }
        else
        {
            Top++;
            item[Top] = value;
        }
    }
    int GetValue()
    {
        if (IsEmpty())
        {
            cout << "Stack is Fy";
        }
        else
        {
            return item[Top];
        }
    }
    void PopValue()
    {
        if (IsEmpty())
        {
            cout << "Stack is Fy";
        }
        else
            Top--;
    }
    void PopAndSaveValue(int &Value)
    {
        if (IsEmpty())
        {
            cout << "Stack is Fy";
            return;
        }
        else
        {
            Value = item[Top];
            Top--;
        }
    }
    void print()
    {
        if (IsEmpty())
        {
            cout << "Stack is Fy";
        }
        else
        {
            cout << "[";
            for (int i = Top; i >= 0; i--)
            {
                cout << item[i]<<"\t";
            }
            cout << "]" << endl;
        }
    }

} ;
int main()
{
    Stack<int>Stack;
    Stack.PushValue(10);
    Stack.PushValue(20);
    Stack.PushValue(30);
    Stack.PushValue(25);
    Stack.print();
}