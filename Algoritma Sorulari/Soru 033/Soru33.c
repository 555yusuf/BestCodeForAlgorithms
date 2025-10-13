// n*n boyutunda iki dizinini carpimini hesaplak 
#include <stdio.h>
int main()
{
    int Boyut,yedek;
    int dizi[Boyut];
    printf("Dizinin Boyurunu giriniz : ");
    scanf("%d",&Boyut);

    for(int i=0;i<Boyut;i++)
    {
        printf("%d sayiyi giriniz : ",i+1);
        scanf("%d",&dizi[i]);
    }

    for(int i=0;i<Boyut-1;i++)
    {
        for(int j=0;j<Boyut-1;j++)
        {
            if(dizi[i]>dizi[i++])
            {
                int yedek =dizi[j];
                dizi[j]=dizi[j++];
                dizi[j++]=yedek;
            }
        }
    }

    for(int i=0;i<Boyut;i++)
    {
        printf("%d\t",dizi[i]);
    }


    return 0;
}