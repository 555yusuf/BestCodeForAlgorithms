// !girilen bir dizi 3 er 3er kontrul etmek ve max sayıyyı bulmak
#include <stdio.h>
int max_bul(int x1,int x2,int x3)
{
    if(x1>x2&&x1>x3)
    {
        return x1;
    }
    else if(x2>x3&&x2>x1)
    {
        return x2;
    }
    else
    {
        return x3;
    }

}
int main()
{

    int dizi[10] = {18, 46, 12, 05, 56, 12, 25, 14, 12, 36};

    for(int i=0;i<sizeof(dizi)/sizeof(dizi[0])-2;i++)
    {
        int maks=max_bul(dizi[i],dizi[i+1],dizi[i+2]);
        printf("%d\n",maks);
    }

    return 0;
}