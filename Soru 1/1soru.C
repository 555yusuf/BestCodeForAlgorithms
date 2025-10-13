/*
! Girilen bir sayının içindeki çift rakamları bulan kod
! Dizi kullanmak yasak
! Örnek: 
! Giriş: 457842180
! Çıkış: 4,8,4,2,8,0
*/
#include <stdio.h>
int main()
{
    //* Bir sayı eğer 2'ye bölündüğünde kalan "0" ise çift sayıdır
    int sayi, temp, basamak_sayisi = 0, basamak;
    
    printf(">> Bir sayi giriniz: ");
    scanf("%d", &sayi);
    
    //* Sayıyı yedekliyoruz çünkü ileride değerini değiştireceğiz
    temp = sayi;

    //* Sayının yedeği 0 olana kadar döngü devam eder
    while (temp != 0)
    {
        temp /= 10;        //* Her adımda sayıyı 10'a böl
        basamak_sayisi++;  //* Her bölmede basamak sayısını bir artır
    }
    //* Böylece sayının basamak sayısını öğrenmiş olduk
    printf(">>  ");
    //* Bu döngü basamak sayısı kadar çalışacak
    for (int i = 0; i < basamak_sayisi; i++)
    {
        basamak = sayi % 10;  //* Sayının son basamağını al
        
        //* Eğer basamak 2'ye tam bölünüyorsa çift sayıdır
        if (basamak % 2 == 0)
        {
            printf("%d\t", basamak);  // Çift sayıyı ekrana yazdır
        }
        
        sayi /= 10;  //* Birler basamağını silmek için sayıyı 10'a böl
    }

    return 0;
}