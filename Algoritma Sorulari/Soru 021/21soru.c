//!girilen iki dizinin birbirleriyle 
//!çarpinin ve toplamı bulan kod 
#include <stdio.h>
int main()
{
    int array[5] = {2, 3, 11, 6, 7}, dizi[5] = {2, 3, 8, 7, 5};
    int toplam = 0,tamtoplam=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            toplam+=dizi[j]*array[i];   
        }
        printf("x%d = %d \n",i+1,toplam);
        tamtoplam+=toplam;
        toplam=0;
    }
    for(int i=0;i<4;i++)
    {
        printf("x%d + ",i+1 );
    }
        printf("x%d = ",5 );
    printf(" %d",tamtoplam);
    return 0;
}