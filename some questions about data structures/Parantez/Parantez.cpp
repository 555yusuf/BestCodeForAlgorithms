//Parantez soruso (kullanıcı tarafından girilen bir
//ifadenin parantezlerın yerleşimi doğrumu diye bakan kod )
#include <iostream>
#include <string>
#include <stack>
using namespace std;
bool arePair(char open, char close)
{
    if (open == '(' && close == ')')
        return true;
    else if (open == '{' && close == '}')
        return true;
    else if (open == '[' && close == ']')
        return true;
    return false;
}
bool areBlaced(string exp)
{
    stack<char> S;
    for (int i = 0; i < exp.length(); i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
            S.push(exp[i]);
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if (S.empty() || !arePair(S.top(), exp[i]))
                return false;
            else
                S.pop();
        }
    }
    return S.empty() ? true : false;
}
int main()
{
    string exp;
    cout << "Enter an expresion : ";
    cin >> exp;
    if (areBlaced(exp))
        cout << "Balanced :)";
    else
        cout << "Not Balanced ";
}