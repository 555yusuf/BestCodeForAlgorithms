//Girilen bir sayının binary karşılığını yazdıran kodu :
//örnek : 7 girildi çıkıs ==> 111
#include <iostream>
#include <string>
#include <stack>
using namespace std;
void print(std::stack<int> St)
{
    while (!St.empty())
    {
        cout << St.top();
        St.pop();
    }
}
int binary(int number){
    stack<int>s;
    while (number>0)
    {
        int temp = int(number % 2) ;
        s.push(temp);
        number/=2;
    }
    print(s);
    
}
int main()
{
    int Number ;
    cout <<"sayi girniz : ";
    cin >> Number;
    binary(Number);
    return 0;
}