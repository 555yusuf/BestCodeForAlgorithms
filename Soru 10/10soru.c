/*
!Verilen bir sayının palindrom olup olmadığını
!while döngüsü kullanarak kontrol eden bir C programı yazın.
!Palindrom:tersten okunuşu da aynı olan cümle, sözcük ve sayılara denilmektedir.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int sayi,ters=0;
    printf("sayi giriniz :");
    scanf("%d",&sayi);
    sayi=abs(sayi);
    int temp=sayi;
    while (sayi>0)
    {
        ters=ters*10 +sayi%10;
        sayi/=10;
    }
    if(ters==temp)
    {
        printf("girdiginiz sayi palindrom \nbir sayidir");
    }
    else
    {
        printf("girdiginiz sayi palindrom degildir");
    }
    



    return 0;
}