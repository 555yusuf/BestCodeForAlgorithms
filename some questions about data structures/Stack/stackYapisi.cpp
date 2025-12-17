#include <iostream>
#include <stack> //stack kütüphanesi
//! Son giren ilk çıkar 
using namespace std;
int main()
{
    stack<int> st1; // Değiken türü <değişken tibi > ismi
    // push fonksiyonu
    st1.push(10);
    st1.push(14);
    st1.push(56);
    st1.push(78);
    st1.push(45);
    st1.push(-78);
    // top() fonksyonu
    cout << st1.top() << endl; // -78 yazdırır
    // pop() fonksiyonu
    st1.pop(); // en üsteki elemanı silmektedir
    cout << "silme islemi gerceklesti" << endl;
    cout << st1.top() << endl; // 45 yazdırır
    // tüm elemanları yazdırmak
    cout << "{";
    while (!st1.empty())
    {
        cout << st1.top() << " "; // -78 yazdırır
        st1.pop();
    }
    cout<<"}";
}