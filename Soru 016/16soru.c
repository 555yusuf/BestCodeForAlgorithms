/*
!Dişardan girilen iki sayının onları birleştirerek elde edebileceğimiz en büyük sayı nedir 
!örnek 1:
!input : n1 = 234 , n2 = 89
!output : 89234 "çünkü en büyük sayi 8 ile başlayan "
! yani soldan en son sayiya bakacağiz n2'nin en soldaki basamaği 8 olduğu için ve aynı zamanda 
! n1'in en soldaki basamaği 1 olduğundan ilk önce büyük olan basamaği yazdırırız 
!yani print("%d%d",n2,n1);
!örnek 2 :
! n1 = 343 , n2 = 123
! output: 343123

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//* öncelikle sayıların basamak sayılarını öğrenmek için bir fonk. oluşturduk 
int sayac(int x)
{   

    int basamak_sayisi = 0;
    while (x != 0)
    {
        x /= 10;
        basamak_sayisi++;
    }
    return basamak_sayisi;
}

int main()
{
    int x1, x2;
    //* dışardan 2 tane sayı aldık 
    printf("1. sayiyi giriniz ");
    scanf("%d", &x1);
    printf("2. sayiyi giriniz ");
    scanf("%d", &x2);
    //*n1 ve n2 girilen sayıların basamak sayısını temsil etmektedir 
    int n1, n2, m1, m2;

    //*n1 içine x1'in basamak sayısını kaydet 
    n1 = sayac(x1);
    //*n2 içine x2'in basamak sayısını kaydet 
    n2 = sayac(x2);

    //*en soldaki sayıyı elde etmek için girilen sayinin basamak sayısının eksi biri kadar 10 ile böldük ve m içine kaydettik 
    m1 = x1 / pow(10, n1 - 1);
    m2 = x2 / pow(10, n2 - 1);


    //* şimdi sayilar bir birlerine eşit ise sayiyi bitir 
    if (m1 == m2)
    {
        printf("Tekrar deneyiniz :) ");
        return 1;
    }
    if (m1 < m2)//*2. durum 
    {
        printf("%d%d", x2, x1);
    }
    else if (m2 < m1)//* 3. durum 
    {
        printf("%d%d", x1, x2);
    }
    return 0;
}
