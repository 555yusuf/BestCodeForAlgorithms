/*
!Soru 2: n elemanlı bir dizinin tüm elemanları tek tek okunacak ve okunan son 3 sayı arasından en
!büyük sayı ekrana yazdırılacak.*/

#include <stdio.h>
int main()
{
    int n = 0;
    int m = n + 1;
    int k = n + 2;
    int dizi[16] = {12, 26, 15, 48, 19, 15, 62, 15, 184, 45, 26, 18, 45, 16, 23, 78};
    int boyut = sizeof(dizi) / sizeof(dizi[1]);
    for (n = 0; n < boyut; n++)
    {
        if (dizi[n] > dizi[m] && dizi[n] > dizi[k])
        {
            printf("%d\t", dizi[n]);
        }
        else if (dizi[m] > dizi[n] && dizi[m] > dizi[k])
        {
            printf("%d\t", dizi[m]);
        }
        else
        {
            printf("%d\t", dizi[k]);
        }
    }

    return 0;
}