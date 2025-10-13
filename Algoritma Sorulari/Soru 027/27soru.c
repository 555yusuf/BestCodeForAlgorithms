/*
*2.soru
!ekrandan sürekli olarak sayı girilmektedir .
!ekrandan girilen son 3 sayı arasında
!en büyük sayi ekrana yazdırılıyor
!girilen sayi 0 ise program sonlanacaktır 
!örnek: 5 9 3 6 1 5 7 1 8 6 8 9 4 3
!output: 9 9 6 6 7 7 8 8 9 9 9
*/
#include <stdio.h>
int main()
{
    int sayi, i, index = 0;
    int dizi[3];                 //* 3 tane sayi alacağimiz için dizinin boyutu 3 yaptık
    int depolama_dizisi[100000]; //*en büyük sayiyi kaydetmek için bir dizi oluşturduk
                                 //*ve boyutu keyfi bir şeklide belirledir.
    for (i = 0; i < 3; i++)
    {
        printf("sayi giriniz :");
        scanf("%d", &sayi);
        dizi[i] = sayi;
    } //*kallanıcıdan 3 taen sayi aldık ve sırasıyla diziye kaydettik

    //*sayi dediğimiz değişken olumlu sayi olduğu sürece devam etsin
    //*(olumlu sayi sifir "0" hriç tüm sayilar )
    while (sayi)
    {
        //*sayilari birbireleriyle karşilaştirdik
        if (dizi[0] > dizi[1] && dizi[0] > dizi[2])
        {
            //*eğer 1. sayi hem 2. sayidan hemde 3. sayidan daha büyükse sayiyi depolama dizisine kaydet
            depolama_dizisi[index++] = dizi[0];
            //*"index"değişkeni başlangiç değeri 0 ,index'e kaydet ve ondan sonra index'in değerini 1 arttir
        }
        else if (dizi[1] > dizi[0] && dizi[1] > dizi[2])
        {
            depolama_dizisi[index++] = dizi[1];
        }
        else
        {
            depolama_dizisi[index++] = dizi[2];
        }
        //* burda sayilari teker teker denedik ve en büyüğünü bulduk

        printf("sayi giriniz :"); //*Burda yeniden kullancidan bir sayi alıp ve 3.sayiya kaydediceğiz
        scanf("%d", &sayi);
        //*2.sayinin değerini 1. sayiya aktar
        dizi[0] = dizi[1];
        //*3.sayinin değerini 2. sayiya aktar
        dizi[1] = dizi[2];
        //*dışardan girilen sayinin değerini 3. sayiya aktar
        dizi[2] = sayi;
        //*döngüyü devam et
    }
    //*elde ettiğimiz diziyi yazdirmak için döngü index sayi kadar dönsün çünkü : index sayisi kadar max sayi bulduk
    for (i = 0; i < index; i++)
    {
        //*sayiyi yazdirsin
        printf("%d\t", depolama_dizisi[i]);
    }
    return 0;
}