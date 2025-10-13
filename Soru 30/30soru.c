/*
!Soru 1. Herhangi bir dizi içindeki en büyük üçüncü sayıyı bulan kodu yazınız.
!Örnek dizi: {9 6 1 3 6 5 2 3 2 0 7 1 5 7 3} ise çıktı aşağıdaki şekilde olmalı.
!Çıktı:
!En büyük 3. sayı: 6*/

#include <stdio.h>

int main() {
    int Boyut;
    printf("Dizinin Boyutunu giriniz: ");
    scanf("%d", &Boyut);
    int dizi[Boyut];

    for (int i = 0; i < Boyut; i++) {
        printf("%d sayiyi giriniz: ", i + 1);
        scanf("%d", &dizi[i]);
    }

    for (int i = 0; i < Boyut - 1; i++) {
        for (int j = 0; j < Boyut - 1 - i; j++) {
            if (dizi[j] > dizi[j + 1]) {

                int yedek = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = yedek;
            }
        }
    }

    printf("3. En Buyuk sayi %d ",dizi[2]);

    return 0;
}