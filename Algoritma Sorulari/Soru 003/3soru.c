/*
!Belirtilen bir sınıra (örneğin 20) kadar olan çift sayıların küplerinin
!toplamını while döngüsü kullanarak hesaplayan 
!ve yazdıran bir C programı yazın.
*/
#include <stdio.h>
int main()
{
    int cift_toplam=0,Tek_toplam=0,i=1;
    while (i<21)
    {
        if(i%2==0)
        {
            cift_toplam+=i*i;
        }
        else
        {
            Tek_toplam+=i*i*i;
        }
        i++;
    }
    printf("Tek sayilarin \nkuplerin tolami :%d\n",Tek_toplam);
    printf("=========\n");
    printf("cift sayilarin \nkaresinin toplami :%d\n",cift_toplam);

    return 0;
}