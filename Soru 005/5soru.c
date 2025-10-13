/*
!Soru 4: Girilen bir sayının basamaklarının ilk yarısının toplamı ile ikinci yarısının toplamının çarpımını
!bulan kodu yazınız.
!Örnek:
!n = 54 ise cevap (4)*(5) = 20
!n = 1234 ise cevap (1+2) * (3+4) = 21
!n = 652302 ise cevap (6+5+2) * (3+0+2) = 65
*/
#include <stdio.h>
int main()
{
    int sayi, basamakSayisi = 0, save, basamak = 0, topalm1 = 0, topalm2 = 0;
    printf("sayi giriniz : ");
    scanf("%d", &sayi);
    save = sayi;
    while (sayi != 0)
    {
        sayi = sayi / 10;
        basamakSayisi++;
    }
    if (basamakSayisi % 2 != 0)
    {
        printf("girdiginiz sayi cift basamakli bir sayi degildir :( ");
        return 1;
    }
    sayi = save;
    for (int i = 0; i < basamakSayisi; i++)
    {
        basamak = sayi % 10;
        sayi /= 10;
        if (i < basamakSayisi / 2)
        {
            topalm1 += basamak;
        }
        else
        {
            topalm2 += basamak;
        }
    }
    printf("cevap : %d",topalm1*topalm2);

    return 0;
}