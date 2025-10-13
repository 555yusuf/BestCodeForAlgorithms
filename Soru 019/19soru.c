
/*
! Dişardan girilen iki tane sayiyi basamakların yerlerinin değiştirerek en büyük sayıyı elde etmek 
!input : n1 = 1895, n2 =  468 
!output : 9886541
! yani sayıları birleştirib ve büyükten küçüğe doğru sıralamak
*/

#include <stdio.h>

#include <stdlib.h>

//* Öncelikle işimizi kolaylaştırmak için iki sayıyı bir sayı şeklinde getirdik bu iş için bir fonk. oluşturduk 
int berlestir(int x1, int x2)
{
    //* sayıların bir tanesinin değerini kaydettik 
    int y = x2;
    //* kaydettiğimiz sayının değeri 0 büyük old. sürece döngü çalışsın 
    while (x2 != 0)
    {
        //* girilen 1. sayı 2. sayının basamakları kadar 10 şle çarp 
        x1 = x1 * 10;
        //* ve sayıyı küçült 
        x2 /= 10;
    }
    //* bie sayıların toplamını ver 
    return x1 + y;
    //* burda bunu yaptık n1 = 234 olsun n2 = 3024 olsun 
    //* şimdi n1'i n2'nin basamak sayısı kadar 10 ile çarpsak 
    //* böyle olsur( 1. sayi )*10^(2. sayının basamk sayısı yani 4 ) ======> 234 * 10 ^4 = 2340000 ve ona 2. sayının kendisini eklesek böyle olur ===> 2340000+3024 = 2343024 
}

int main()
{
    int x1, x2;

    printf("1. sayi :");
    scanf("%d", &x1);
    printf("2. sayi :");
    scanf("%d", &x2);
    //* her iki sayıyı birlestir fonk. gönder 
    int Tam_sayi = berlestir(x1, x2);

    //* şimidi eğer sayıların içinde 9 varsa yazıdır yoksa bir azalt 
    for (int i = 9; i >= 0; i--)
    {
        int Temp = Tam_sayi;
            
        while (Tam_sayi != 0)
        {
            int basamak = Tam_sayi % 10;
            Tam_sayi /= 10;

            if (basamak == i)
            {
                printf("%d", i);
            }
        }
        //* Her defasında sayının değerini kaydet 

        Tam_sayi = Temp;
    }

    return 0;
}
