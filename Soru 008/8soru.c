/*
!palindromik sayı , iki taraftan okunduğu zaman okunuş yönüyle aynı olan sayılardır 
örenek :: 121 , 156651, 9,
*/

#include <stdio.h>
int main()
{
    int sayi,ters_sayi=0,basamak=0;
    printf("sayi giriniz : ");
    scanf("%d",&sayi);
    int temp=sayi;//Bu şekilde sayinnin yedeğini almış oluruz 
    while (sayi!=0) //* sayi sifir olmadığı sürece devam etsin 
    {
        basamak=sayi%10;//*Burdada sayinin birler basamağinin  elde ettik bu şekilde 
        sayi/=10;//*onlar basamağini birler basamaği yapmak için 10 ile böldük 

        ters_sayi=ters_sayi*10+basamak;//* burda ise 
        //* ters_sayinin = 0*10 + basamak
        //* yani ters sayinin içinde ters sayinin 10 katı ve sayinin birler basamaği ekle 
    }
    sayi=temp;//* sayini değerini sıfır yaptığimiz için sayıyı bir daha yedeğiyle eşitledik 
    if(sayi==ters_sayi)//* Eğer sayi ters_sayiyi eşit ise doğru  
    {
        printf("girdiginiz sayi bir palindrom sayiyidir :)");
    }
    else //* yamliş ise bunu yazdır 
    {
        printf("girdiginiz sayi bir palindrom sayisi degildir  :(");
    }


}