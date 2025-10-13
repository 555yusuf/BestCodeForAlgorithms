//! Soru 2: Girilen sayının son rakamının sayının içinde kaç adet olduğunu bulan kodu yazınız.
//! Örnek:
//! n = 123456 ise 1 adet 6 rakamı var, cevap: 1
//! n = 410123003 ise 2 adet 3 rakamı var, cevap: 2
//! n = 2301871 ise 2 adet 1 rakamı var, cevap: 2
#include <stdio.h>
int main()
{

    int sayi, birler, sayac = 0, basamakSayisi = 0, basamk;
    printf("lutfen sayiyi giriniz : ");
    scanf("%d", &sayi);
    int save = sayi;
    //*basamak sayisini öğrendik
    while (sayi != 0)
    {
        sayi = sayi / 10;
        basamakSayisi++;
    }
    // printf("%d",basamakSayisi);
    sayi = save;
    birler = sayi % 10;
    for (int i = 0; i < basamakSayisi; i++)
    {
        basamk = sayi % 10;
        if (basamk == birler)
            sayac++;
        sayi = sayi / 10;
    }

    printf("%d sayisinda %d tane %d vardir :) ",save,sayac,birler);

    return 0;
}