/*
!Örnek:
!Bir firmanın çalışan bilgilerinin yer aldığı, kullanıcı tanımlı bir ada sahip, çalışanın isim(sadece adı
!yeterli), maaş ve doğum tarihinin yer aldığı (doğum tarihi bilgileri gün, ay, yıl şeklinde ayrı bir struct
!yapısında tutulacak) bir struct yapısı oluşturunuz ve 3 adet çalışanın bilgilerini dışarıdan alarak veya
!programın içerisine kaydettikten sonra ekrana yazdırınız.
*/
#include <string.h>
#include <stdio.h>
struct Eleman
{
    char Name[10];
    char SurName[10];
    int Maas;

};
typedef struct Dogum_Bilgileri
{
    int Yil;
    int Ay;
    int Gun;
}Per;
int main()
{
    struct Eleman Person1 ,Person2 ,Person3;
    Per Per1,Per2,Per3;
    strcpy(Person1.Name,"Yusuf");
    strcpy(Person1.SurName,"ibrahim");
    Person1.Maas=49000;
    Per1.Yil=2004;
    Per1.Ay=9;
    Per1.Gun=13;

    //*==========================
    strcpy(Person2.Name,"Enes");
    strcpy(Person2.SurName,"Aktas");
    Person2.Maas=38521;
    Per2.Yil=2014;
    Per2.Ay=7;
    Per2.Gun=23;
    //*========================
    strcpy(Person3.Name,"Bican");
    strcpy(Person3.SurName,"Goktepe");
    Person3.Maas=19855;
    Per3.Yil=2004;
    Per3.Ay=8;
    Per3.Gun=3;
    printf("isim Soyisim : %s %s\n",Person1.Name,Person1.SurName);
    printf("Dogum tarihi : %d-%d-%d\n",Per1.Yil,Per1.Ay,Per1.Gun);
    printf("Maasi : %d\n",Person1.Maas);
    printf("===============\n");
    printf("isim Soyisim : %s %s\n",Person2.Name,Person2.SurName);
    printf("Dogum tarihi : %d-%d-%d\n",Per2.Yil,Per2.Ay,Per2.Gun);
    printf("Maasi : %d\n",Person2.Maas);
    printf("===============\n");
    printf("isim Soyisim : %s %s\n",Person3.Name,Person3.SurName);
    printf("Dogum tarihi : %d-%d-%d\n",Per3.Yil,Per3.Ay,Per3.Gun);
    printf("Maasi : %d\n",Person3.Maas);    
    return 0;
}
