/*
!Soru 4: Girilen bir sayının basamaklarının ilk yarısının toplamı ile ikinci yarısının toplamının çarpımını
!bulan kodu yazınız.
!Örnek:
!n = 54 ise cevap (4)*(5) = 20
!n = 1234 ise cevap (1+2) * (3+4) = 21
!n = 652302 ise cevap (6+5+2) * (3+0+2) = 65
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int sayi, temp, basamak_sayisi = 0;
    int sol = 0, sag = 0;
    printf("sayi giriniz : ");
    scanf("%d", &sayi);
    temp = sayi;
    while (temp != 0)
    {
        temp /= 10;
        basamak_sayisi++;
    }

    if (basamak_sayisi % 2 != 0)
    {
        printf("Tekrar deneyiniz :)");
        return 1;
    }

    for (int i = 0; i < basamak_sayisi / 2; i++)
    {
        sag += sayi % 10;
        sayi /= 10;
    }

    for (int i = 0; i < basamak_sayisi / 2; i++)
    {
        sol += sayi % 10;
        sayi /= 10;
    }

    printf("%d * %d = %d ", sag, sol, sol * sag);

    return 0;
}