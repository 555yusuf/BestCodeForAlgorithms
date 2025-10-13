/*
!Soru 3: Girilen bir sayı ile bu sayının tersinin toplamını bulan kodu yazınız.
!Örnek:
!n = 54 ise cevap 54+45 = 99
!n = 1234 ise cevap 1234+4321 = 5555
!n = 652302 ise cevap 652302+203256 = 805558
!n = 750 ise cevap 750 + 57 = 807
!n = 1200 ise cevap 1200 + 21 = 1221
*/
#include <stdio.h>
int main()
{
    int sayi, ters = 0, save, birler = 0;
    printf("sayi giriniz :");
    scanf("%d", &sayi);
    save = sayi;
    while (sayi != 0)
    {
        birler = sayi % 10;
        ters = ters * 10 + birler;
        sayi /= 10;
    }
    printf("girmis oldugunuz sayi %d ile tersi'nin %d toplami %d", save, ters, save + ters);
    return 0;
}