/*
!Dişaradn girilen bir sayinin her basamağindan kaç tae vardir
!örnek :
!12345231
!2 Adet 1 vardir
!2 Adet 3 vardir
!2 Adet 2 vardir
!1 Adet 5 vardir
!1 Adet 4 vardir
NOT: Diziler kullanmka yasaktir.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int sayi, temp, orijinalSayi, sayac, basamak, kontrol_edilen_kisim = 0;
    printf("sayi giriniz : ");
    scanf("%d", &sayi);
    int mutlak=abs(sayi);
    orijinalSayi = mutlak;
    while (orijinalSayi != 0)
    {
        basamak = orijinalSayi % 10;
        orijinalSayi /= 10;
        //*bölünen sayinin kontrolunu sağlamak için kopyaladik
        int kontrolSayisi = kontrol_edilen_kisim;
        int tekrar = 0;
        while (kontrolSayisi != 0)
        {
            if (kontrolSayisi % 10 == basamak)
            {
                tekrar = 1;
                break;
            }
            kontrolSayisi /= 10;
            if (tekrar != 0)
            {
                continue;
            }
        }

        temp = mutlak;
        sayac = 0;
        while (temp != 0)
        {
            if (temp % 10 == basamak)
            {
                sayac++;
            }
            temp /= 10;
        }
        printf("%d Adet %d vardir \n", sayac, basamak);
    }

    return 0;
}