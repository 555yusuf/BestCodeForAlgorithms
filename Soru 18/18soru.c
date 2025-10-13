/*
! Dişardan girilen bir sayinin birler basamaği kadar hem sağddan hem soldan
!sayı silinecektir
!dizi kullanmak yasak
!örnek 
! giriş : 155945356622 
!burda birler basamaği 2 olduğu için hem
!soldan hem sağdan iki sayi silinecektir
! çıkış : 59453566
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    long long int sayi, temp, ters = 0;
    int basamaksayisi = 0, basamak;
    printf("sayi giriniz :");
    scanf("%lld", &sayi);
    sayi = abs(sayi);

    temp = sayi;

    // sayinin kaç basamkali olduğunu
    while (temp > 0)
    {
        basamaksayisi++;
        temp /= 10;
    }
    temp = sayi;
    // eğer birler basamaği basamak sayisindan daha büyük ise yanliş versin
    if (basamaksayisi/2 <= sayi % 10)
    {
        printf("tekrar deneyininiz");
        return 1;
    }
    // sayinin tersi
    while (temp > 0)
    {
        ters = ters * 10 + temp % 10;
        temp /= 10;
    }
    temp = sayi;

    basamak = sayi % 10;
    for (int i = 0; i < basamaksayisi; i++)
    {
        if (i < basamak || i >= basamaksayisi - basamak)
        {
            ters /= 10;
        }
        else
        {
            printf("%lld", ters % 10);
            ters /= 10;
        }

    }

    return 0;
}