#include <iostream>
#include <stack>
using namespace std;
void print(std::stack<int> St)
{
    cout << "Listenin Tamami \n{";
    while (!St.empty())
    {
        cout << St.top() << " ";
        St.pop();
    }
    cout << "}" << endl;
}
int main()
{
    stack<int> St; // Tanimlama
    // Stack bos yada dolu ogrenmek icin
    if (St.empty())
    {
        cout << "Bos Stack" << endl;
    }
    cout << "stack of size :  " << St.size() << endl; // Boyut ogrenme
    // Atama yapma
    St.push(15); // Atama
    St.push(10);
    St.push(43);
    St.push(235);
    // En son ekledigimiz elemena ulasmak icin
    int enSonEleman = St.top();
    cout << "En Son Eklenen Eleman : " << enSonEleman << endl; // 235
    // Eleman silme (En son elemani silmektedir )
    St.pop();
    cout << "En Son Eklenen Eleman : " << St.top() << endl; // 43
    // tum listeyi yazdirmak
    print(St);
    stack<int> OtherStack;
    OtherStack.push(-13);
    OtherStack.swap(St);
    printf("====Kopyalanmis stack=======");
    print(OtherStack);
    return 0;
}