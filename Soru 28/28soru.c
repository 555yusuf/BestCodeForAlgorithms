/*
!palindromik sayi , iki taraftan okunguğu zaman okunuş yönüyle aynı olan sayılardır
!örnek : 464 , 69296 ,3
*/
#include <stdio.h>
int main()
{
    int sayi, ters = 0, yedek;
    printf("sayi giriniz:");
    scanf("%d", &sayi);
    yedek = sayi; //*bir azdan sayinin ana değerini kaybedeceğimiz için sayiyi yedekledik
    //*sayinin tersini almak için
    while (sayi > 0)
    {
        //* "ters" değişkeni başlangiç değeri 0 ve 10 ile çarptiğimizda gene sıfır kalır
        //* ve sayinin ilk basamağini ona ekleriz
        ters = ters * 10 + sayi % 10;
        //* yani => ters = "tersin kendisi " * 10 + saynin ilk basamaği
        sayi /= 10;
        //* şimdi sayinin ikinci basamağina olaşmak için 10 ile böleriz
    }
    //*Not ==> Burda sayinin değeri 0 olduğu için bunu bir daha kullanamayız ama "yedek " değişkeni
    //* sayinin ilk değeriyle aynı olduğu için "yedek "değişkeni eşitlik için kullanabiliriz
    if (ters == yedek)
    {
        printf("girmis old. sayi bir palindrom sayisidir :) ");
    }
    else
    {
        printf("girmis old. sayi bir palindrom sayisi degildir  :( ");
    }

    return 0;
}