/*
!1. Dışarıdan girilen bir sayı ile karesinin toplamını bulan programı 
!fonksiyon kullanarak yazınız (kare alma ve toplama işlemleri ayrı ayrı fonksiyonlarda tanımlanacak).
!Örnek: 10
!Cevap: 10 + 100 = 110*/
#include <stdio.h>
int kare(int sayi)
{
    sayi=sayi*sayi;
    return sayi;
}
void topla(int sayi,int kare)
{
    printf("%d",kare+sayi);
}
int main()
{
    int sayi;
    printf("sayi giriniz : ");
    scanf("%d",&sayi);

    int karesi=kare(sayi);
    topla(sayi,karesi);
    return 0;
}