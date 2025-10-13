/*
!Dişardan girilen beş  sayinin en büyüğnü bulan kodu yaziniz

*/

#include <stdio.h>
int main()
{

    int sayi, enbuyuk, n;
    printf("kac tane sayi girreceksiniz : ");
    scanf("%d", &n);

    printf("sayi girininz : ");
    scanf("%d", &sayi);
    enbuyuk = sayi;
    for (int i = 0; i < n; i++)
    {
        printf("sayi girininz : ");
        scanf("%d", &sayi);
        if (sayi > enbuyuk)
            enbuyuk = sayi;
    }
    printf("girmis oldugunuz sayilarin en buyugu %d ", enbuyuk);
    return 0;
}