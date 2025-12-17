#include <stack>
#include <iostream>
#include <time.h>
using namespace std;
/*
*Amaç: 
!Yalnızca iki adet yığın (stack) ve tek bir geçici
!eğişken (temp) kullanarak, belirli kurallar çerçevesinde
!sayıları sıralamak ve filtrelemek.

*Araçlar:

!1)st1 (Kaynak Yığın): Başlangıçta 1, 2 ve 3 
!sayılarından oluşan rastgele verilerle doludur.

!2)st2 (Hedef Yığın): Başlangıçta boştur.
!şlem sonunda sıralanmış verileri tutacaktır.   

!3)temp (Geçici Değişken): Veri transferi sırasında 
!sadece tek bir sayıyı geçici olarak tutmak için kullanılabilir.

*Kurallar ve Kısıtlamalar:

!Veri Yapısı Kısıtlaması: st1, st2 ve temp dışında hiçbir veri yapısı
!(dizi, vektör, ekstra yığın vb.) kullanılamaz.

!Sayma Yasağı: Elemanların sayısını tutup buna göre döngü 
!kurmak yasaktır (Örn: "5 tane 2 var, o halde 5 kere 2 yazdır" denilemez). İşlem tamamen anlık yığın durumlarına göre dinamik olarak yapılmalıdır.

! '3' Sayılarının Akıbenti: '3' sayısı istenmeyen veridir
!İşlem sırasında görüldüğü yerde silinmeli, hiçbir yığına eklenmemelidir.

*Hedeflenen Sonuç (st2'nin Son Hali): Algoritma tamamlandığında st2 yığınının yapısı şu şekilde olmalıdır:

!Yığının en alt kısmında, st1'den gelen tüm 2 sayıları bir arada bulunmalıdır.
!Tüm 2'lerin üstünde ise st1'den gelen tüm 1 sayıları bulunmalıdır.

*/
int main()
{
    //?Sorunun Yapısı
    stack<int> st1;
    srand(time(NULL));
    stack<int> st2;
    for (int i = 0; i < 100; i++)
        st1.push(rand() % 3 + 1);
    //?Burayı değıştırmek yasak 
    
    while (!st1.empty())
    {
        if (st1.top() == 3)
            st1.pop();
        else if (st1.top() == 1)
        {
            st2.push(st1.top());
            st1.pop();
        }
        else if (st1.top() == 2)
        {
            int temp = st1.top();
            st1.pop();
            while (st2.top() != 2 && !st2.empty())
            {
                st1.push(st2.top());
                st2.pop();
            }
            st2.push(temp);
        }
    }
    while (!st2.empty())
    {
        cout << st2.top() << " ";
        st2.pop();
    }

    return 0;
}