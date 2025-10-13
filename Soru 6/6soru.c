/*
! verilen bir dizi sıralamak 
*/
#include <stdio.h>
int main()
{
    int dizi[10] = {5, 6, 9, 4, 8, 1, 7, 9, 15, 90};
    int yedek;

    for (int j = 0; j < 10; j++)
    {
        for (int i = 0; i < 9 - j; i++)
            if (dizi[i] < dizi[i + 1])
            {
                yedek = dizi[i];
                dizi[i] = dizi[i + 1];
                dizi[i + 1] = yedek;
            }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", dizi[i]);
    }

    return 0;
}