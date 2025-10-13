/*
!10 ile 1000 arasındaki tam kare sayıları ekrana yazdıran programın
!algoritma ve akış diyagramını çiziniz.
*/
#include <stdio.h>
int main()
{
    int i,karekok;
    for(i=1;i<1000;i++)
    {
        if(i*i<1000)
        {
            printf("%d^2 %d\n",i,i*i);
        }

    }

    return 0;
}