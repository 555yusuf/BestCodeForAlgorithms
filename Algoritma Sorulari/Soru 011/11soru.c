/*
!While döngüsünü kullanarak ilk 10 Fibonacci
!sayısını bulan ve yazdıran bir C programı yazın.
!1 2 3 5 8 13 21 34 
*/
#include <stdio.h>
int main()
{
    int a = 0, b = 1, sonraki;
    for (int i = 0; i < 20; i++)
    {
        sonraki = a + b;
        printf("%d\t", sonraki);
        a = b;
        b = sonraki;
    }

    return 0;
}