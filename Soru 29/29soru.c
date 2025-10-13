/*
!Soru 3. 10 elemanlı bir dizi oluşturduktan sonra dışarıdan bir sayı alıp, eğer sayı dizide varsa diziden
!silen ve dizinin son halini ekrana yazdıran kodu yazınız.
!Örnek: 5 6 9 8 4 1 5 3 10 25
!Aranacak sayı: 4
!Eleman dizide var. Eleman silindi.
!Dizinin son hali: 5 6 9 8 1 5 3 10 25
*/
#include <stdio.h>
int main()
{   
    //*Rastegele Bir Dizi oluşturduk 
    int dizi[10]={1,2,3,4,5,6,7,8,9,10};
    int Silenecek_sayi;

    printf("sayi giriniz : ");
    scanf("%d",&Silenecek_sayi); 
    //*dizi 10 defa çalışacak 
    for(int i=0;i<10;i++)
    {
        //*Eğer dizi'nin elemanı silenecek_sayıya Eşit ise aşağıdaki  kodu uygula 
        if(dizi[i]==Silenecek_sayi)
        {
            //*Döngüyü olduğumuz yeden başlat 
            for(int j=i;j<10;j++)
            dizi[j]=dizi[j+1];
            //*sayıları birer birer kaydırdık 
            /*
            !örenek dizi = 1 ,2,3,4,5
            !silenecek  sayi 4
            ! 1 2 (3 yerinde 4'ü yazdırdık ) ve basamakları ona göre kaydırdık  
            */
        }

    }
    //*diziden bir sayi silindi diye dizinin boyutunu küçüttük 
    for(int i=0;i<9;i++)
    printf("%d\t",dizi[i]);
    
    return 0;
}