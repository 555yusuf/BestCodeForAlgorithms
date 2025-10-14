//! Selection Sort metot
#include <iostream>
using namespace std;
void SortArray(int arr[], int size)
{
    int MinIndex; // burda dizinin en kucuk elemanin index'ni kaydedecegiz
    for (int i = 0; i < size - 1; i++)
    {
        MinIndex = i; // MinIndex baslangici i'den olsun
        for (int j = i + 1; j < size; j++)
        {
            if (arr[MinIndex] > arr[j]) //Eger MinIndex'in dizideki degeri buyuktur j'nin dizideki degerinden 
                MinIndex = j; // Mindex  j'nin degerini alsin 
        }
        swap(arr[i], arr[MinIndex]); // ve minumum sayiyi dizinin dizinin i'ninci index'ne kaydet 
    }
}
int main()
{
    int length=10;
    int array[length];
    // disardan diziyi aldik 
    for (int i = 0; i < length; i++)
    {
        cout <<">> " << i + 1 << ". Elemeani giriniz " <<": ";
        cin >> array[i];
    }
    SortArray(array, length);
    //Siralanmis Diziyi siralamak 
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << endl;
    }
    return 0;
}
