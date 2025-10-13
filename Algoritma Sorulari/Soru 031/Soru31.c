//Malloc Kullanarak disardan bir dizi almamiz gerekiyor 
// Ve icindeki max sayiyi bulmamiz gerekiyor 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Dizinin boyutunun giriniz: ");
    scanf("%d",&n);
    int* ptr=(int*)calloc(n,sizeof(int));
    int Max_sayi;
    scanf("%d",ptr);
    Max_sayi=*ptr;
    for(int i=1;i<n;i++)
    {
        scanf("%d",ptr+i);
        if(*(ptr+i)>Max_sayi)
        Max_sayi=*(ptr+i);
    }
    printf("En Buyuk sayi  = %d",Max_sayi);
    free(ptr);
    return 0;
}