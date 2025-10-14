//Insertion Sort
#include <iostream>
using namespace std;
void InsertionSort(int array[], int length)
{
    for (int i = 1; i < length; i++)
    {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > key)
            array[j + 1] = array[j--];
        array[j + 1] = key;
    }
}
int main(int argc, char const *argv[])
{
    int dizi[10]{21, 41, 32, 1, 43, -12, 51, 3, 64, 23};
    int length = 10;
    InsertionSort(dizi,length);
    for (int i = 0; i < length; i++)
    {
        cout<<dizi[i]<<"\n";
    }
    
    return 0;
}
