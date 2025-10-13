//! Soru 1: Girilen 2 sayı arasındaki 8e tam bölünen sayıları ve bu sayıların toplamını bulan kodu yazınız.
//! Örnek: 9 100.
//! Cevap: 16, 24, 32, 40, 48, 56, 64, 72, 80, 88, 96 Toplam:616
#include <stdio.h>
int main()
{
    int n1, n2,i;
    printf("bir aralik giriniz : ");
    scanf("%d %d", &n1, &n2);
    if (n1 > n2) { int temp = n1; n1 = n2; n2 = temp; }
    for (i=n1;i<=n2;i++)
    {
        if((i/8)%2==0)
        {
            printf("%d sayisi 8'e tam bolunmektedir :)\n",i);
        }
    }

        return 0;
}