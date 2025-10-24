//kulanıcının bilirdiği kadar sayi girilecek ve yazdırılacak 
#include <iostream>
#include <stack>
using namespace std;
void print(stack<int> St)
{
    cout << "Listenin Tamami \n{";
    while (!St.empty())
    {
        cout << St.top() << " ";
        St.pop();
    }
    std::cout << "}" << endl;
}
int main()
{
    cout << "boyut giriniz :";
    int size;
    stack<int> St;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int temp;
        cout << i + 1 << ". elemani giriniz ";
        cin >> temp;
        St.push(temp);
    }
    print(St);
    return 0;
}
