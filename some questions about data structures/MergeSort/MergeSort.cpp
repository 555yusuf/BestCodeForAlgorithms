//Merge Sort Yontemi
#include <iostream>
using namespace std;
int merge(int arr[], int l, int m, int r);
int mergeSort(int arr[], int l, int r);
int print(int arr[], int length);
int main()
{
    int arr[11]{12, 21, 10, 20, 5, 3, 19, 40, 35, 32, 32};
    int length = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, length - 1);
    cout << "\nSiralanmis dizi: \n";
    print(arr, length);
    return 0;
}

int merge(int arr[], int l, int m, int r) // m = l + (r-l)/2;
{
    int i, k, j;
    int n1 = m - l + 1; // arr[l ..... m]
    int n2 = r - m;     // arr[m+1 ..... r]
    int *LeftArray = new int[n1], *RightArray = new int[n2];

    for (int i = 0; i < n1; i++)
        LeftArray[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        RightArray[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (LeftArray[i] <= RightArray[j])
        {
            arr[k] = LeftArray[i];
            i++;
        }
        else
        {
            arr[k] = RightArray[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = LeftArray[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = RightArray[j];
        j++;
        k++;
    }
    delete[] LeftArray;
    delete[] RightArray;
}
int mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m,r);
    }
}
int print(int arr[], int length)
{
    for (int i = 0; i < length; i++)
        cout << arr[i] << "\t";
}