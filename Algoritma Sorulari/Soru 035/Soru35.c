//Malloc ve Calloc Kullanarak girilen sayilarin toplamini bulan kudu yaziniz 
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Dizinin boyutunun giriniz: ");
    scanf("%d",&n);
    int* ptr=(int*)malloc(n*sizeof(int));
    int toplam=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
        toplam+=*(ptr+i);
    }
    printf("Boyut =%d",toplam);
    free(ptr);
    return 0;
}