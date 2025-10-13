/*
!Soru 3: Program içerisinde tanımlanmış 20 elemanlı bir dizinin içindeki her sayıdan kaç tane olduğunu
!yazdıran kodu yazınız.
!Örnek: 20 boyutlu bir dizinin elemanları {9 9 3 3 3 3 3 6 5 5 0 0 0 0 0 1 1 3 3 3} ise çıktı aşağıdaki
!şekilde olmalı
!Çıktı:
!9: 2
!3: 8
!6: 1
!5: 2
!0: 5
!1: 2
*/
#include <stdio.h>
int main()
{
    int dizi[20] = {1, 2, 9, 6, 5, 4, 7, 5, 9, 4, 1, 2, 5, 1, 2, 0, 8, 8, 9, 1};
    int sayac = 0;
    for (int i=0; i <= 9; i++)  
    {
        for (int j = 0; j < 20; j++)
        {
            if (i == dizi[j])
                sayac++;
        }
        if (sayac != 0)
        {
            printf("%d sayisindan %d tane vardir :)\n ", i, sayac);
            sayac = 0;
        }
    }

    return 0;
}