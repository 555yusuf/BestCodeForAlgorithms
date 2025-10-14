//Bobble sort 
#include <iostream>
using namespace std;
void BobblleSort(int Array[], int length);
void print(int Array[], int length);
int main(int argc, char const *argv[])
{
    int length;
    cout << "Enter a length : ";
    cin >> length;
    int Array[length];
    for (int i = 0; i < length; i++)
    {
        cout << "Enter " << i + 1 << " elment : ";
        cin >> Array[i];
    }
    BobblleSort(Array,length);
    print(Array,length);


    return 0;
}
void BobblleSort(int Array[], int length)
{
    for(int i = 0 ; i<length;i++)
        for (int j = 0; j < length; j++)
        {
            if(Array[i]<Array[j])
            swap(Array[i],Array[j]);
        }
}
void print(int Array[], int length){
    for (int i = 0; i < length; i++)
    {
        cout<<Array[i]<<endl;
    }
    
}

