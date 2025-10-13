/*
Menü olarak ekrana yazdırılacak sorulardan kullanıcı tarafından yapılacak seçim sonucu istenen işlem
sonucu ekrana yazdırılacak (Menü de fonksiyon içerisinde hazırlanıp main kısmına gönderilecek).
1-Dışarıdan girilen sayının faktöriyelini hesaplayan programı yazınız.
Örnek: 5 Cevap: 120
2-Fibonacci serisinin n. elemanını bulan programı yazınız (n kullanıcı tarafından girilecek – Aralık
belirtilebilir).
Fibonacci serisi: 1 1 2 3 5 8 13 21 34 55, 89, 144, 233, …
Örnek: 6 Cevap: 8
3-Dışarıdan girilen 3 tam sayıdan ortanca olanı ekrana yazdıran programı yazınız.
Örnek: 6 4 8 Cevap: 6
*/
#include <stdio.h>
//! 1-Dışarıdan girilen sayının faktöriyelini hesaplayan programı yazınız.
int fak(int sayi)
{
    for (int i = sayi - 1; i > 0; i--)
    {
        sayi *= i;
    }
    return sayi;
}
//! 2-Fibonacci serisinin n. elemanını bulan programı yazınız (n kullanıcı tarafından girilecek – Aralık
//! belirtilebilir).
void fibonacci(int n)
{
    int a = 1;
    int b = 2, toplam;
    for (int i = 0; i < n - 1; i++)
    {
        if (i <= 1)
        {
            toplam = i;
        }
        else
        {
            toplam = a + b;
            a = b;
            b = toplam;
        }
    }
    printf("cevap = %d", toplam);
}
//! 3-Dışarıdan girilen 3 tam sayıdan ortanca olanı ekrana yazdıran programı yazınız.
void ortanca(int n1, int n2, int n3)
{
    if (n1 > n2 && n1 < n3)
    {
        printf("ortanca = %d", n1);
    }
    else if (n2 > n1 && n2 < n3)
    {
        printf("ortanca = %d", n2);
    }
    else
    {
        printf("ortanca = %d", n3);
    }
}
int main()
{

    int secenek = 1, sayi;
    int n1, n2, n3;

    while (secenek != 0)
    {
        printf("\nsecenek girniz 1 ile 3 arasinda : ");
        scanf("%d", &secenek);
        switch (secenek)
        {
        case 1:

            printf("sayi giriniz : ");
            scanf("%d", &sayi);
            int fakt = fak(sayi);
            printf("%d sayisinin fak. = %d", sayi, fakt);
            break;
        case 2:
            printf("sayi giriniz : ");
            scanf("%d", &sayi);
            fibonacci(sayi);
            break;
        case 3:
            printf("3 tane sayi girinzi ");
            printf("1. sayi: ");
            scanf("%d", &n1);
            printf("2. sayi: ");
            scanf("%d", &n2);
            printf("3. sayi: ");
            scanf("%d", &n3);
            ortanca(n1, n2, n3);

        default:
            printf("\nTekrar deneyiniz :(\n ");
            break;
        }
    }
    return 0;
}
