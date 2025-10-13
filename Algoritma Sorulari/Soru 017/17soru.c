/*
!basamakları farıkllı
!elde edebileceğimiz en büyük sayi 
!rnek
!63 485 ==> 86543
!450 6328 ==> 86543320
*/
#include <stdio.h>
#include <stdlib.h>
int birlestir(int n1, int n2)
{
    int yedek = n1;
    while (yedek > 0)
    {
        yedek /= 10;
        n1 *= 10;
    }
    int tamsayi = n1 + n2;
    return tamsayi;
}
int main()
{
    int sayi1, sayi2, yedek,basamak,kontrol=0;
    printf("2 tane sayi girniz\n");
    printf("1. sayi: ");
    scanf("%d", &sayi1);
    printf("2. sayi: ");
    scanf("%d", &sayi2);
    sayi1=abs(sayi1);
    sayi2=abs(sayi2);
    int tamsayi = birlestir(sayi1, sayi2);
    yedek=tamsayi;
    for(int i=9;i>=0;i--)
    {
        yedek=tamsayi;
        while (yedek>0)
        {
            basamak=yedek%10;
            if(basamak==i)
            kontrol++;
            yedek/=10;
        }
        while (kontrol>0)
        {
            printf("%d",i);
            kontrol--;
        }      
    }
    return 0;
}