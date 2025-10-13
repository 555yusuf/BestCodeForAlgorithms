/*
Verilen sıralı bir dizinin içinde bir sayiyi 
bulmak için en hızlı yol (Yolun adı: Binary search )
*/
#include <stdio.h>
#include <stdlib.h>
int Ara(int arr[],int End , int start, int Num)//*dizinin kendisi,dizinin sonu , dizinin başlangici , istenilen sayı 
{
    if(End>start)
    {
        int Half=start + (End-start)/2;
        if(arr[Half]==Num)
            return Half;
        if(arr[Half]>Num)
        {
            Ara(arr,Half,start,Num);
        }
        else if(arr[Half]<Num)
        {
            Ara(arr,End,Half,Num);
        }
    }
}
int main()
{
    int dizi[]={1,5,6,7,8,11,16,49,51,59,60,61,62,63,74,76,81,85,86,89,92,93,95,98,99,102};
    int Boyut=26;
    int start=0;
    printf("\n%d",Ara(dizi,Boyut-1,start,99));//13 or 12 
    return 0;
}










