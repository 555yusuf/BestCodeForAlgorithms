/*
!Kullanıcıdan pozitif bir tam sayı girmesini isteyen bir C programı yazın.
!Bu sayının 10'a kadar olan
!çarpım tablosunu yazdırmak için bir while döngüsü kullanın.
*/

#include <stdio.h>
#include <limits.h>

int main()
{
    long long int sayi,toplam=1ll;
    printf("sayi giriniz :");
    scanf("%lld",&sayi);
    if(sayi>10)
    {   
        for (int i = sayi; i>=10; i--)
        {
            toplam*=i;
        }
    }
    else if(sayi<10)
    {
        for(int i=sayi;i<=10;i++)
        {
            toplam*=i;
        }
    }
    else
        toplam=sayi;

    printf("%lld",toplam);


    return 0;
}