#include <iostream>
#include <vector>
using namespace std;
class Book
{
private:
    string BookName;   //* Kitabın ismi
    int BookYear;      //* Kitabın basım yılı
    int NumberOfBooks; //* Bu kitaptan kaç tane olduğu

public:
    //* Kitap adı ve yılını karşılaştırarak aynı kitap olup olmadığını kontrol eder
    bool CompareDataOfBook(string name, int year)
    {
        //* Hem kitap adı hem de basım yılı aynı ise true döndür
        if (name == BookName && year == BookYear)
            return true;
        else
            return false;
    }

    //* Yeni bir kitap oluşturmak için kullanılan metod
    void CreatDataOfBook(string name, int year)
    {
        BookName = name;
        BookYear = year;
        NumberOfBooks = 1; //* Yeni kitap oluşturulduğunda sayısı 1 olarak başlar
    }

    //* Aynı kitaptan bir tane daha eklendiğinde sayıyı artırır
    void increaseOFNumber()
    {
        NumberOfBooks++;
    }

    //* Kitabın tüm bilgilerini ekrana yazdırır
    void GetDataOfBook()
    {
        cout << endl
             << "Girmis oldugunuz kitabin bilgileri:" << endl;
        cout << "Kitap Adi: " << BookName << endl;
        cout << "Kitap Yili: " << BookYear << endl;
        cout << "Kitap Sayisi : " << NumberOfBooks << endl;
        cout << "==============\n";
    }
};

int main()
{
    vector<Book> V;     //* Kitapları saklamak için vektör
    string BookName;    //* Kullanıcıdan alınacak kitap adı
    int BookYear;       //* Kullanıcıdan alınacak kitap yılı
    bool exist = false; //* Kitabın listede olup olmadığını kontrol eder
    cout << "\x1B[2J\x1B[H";
    //* Sonsuz döngü - program sürekli çalışır
    while (true)
    {
        if (BookYear==-1000)
            return 1;
        if (BookYear == -9999)
        {
            cout << "\x1B[2J\x1B[H";
            cout << "terminal Temizlendi \n";
            continue;
        }
        //* Kullanıcıdan kitap bilgilerini al
        cout << "Kitabin adini giriniz: ";
        cin >> BookName;
        cout << "Kitabin yilini giriniz: ";
        cin >> BookYear;

        //* Her yeni kitap girişinde kontrol değişkenini sıfırla
        exist = false;

        //* Vektördeki tüm kitapları kontrol et
        for (int i = 0; i < V.size(); i++)
        {
            //* Kitap zaten listede var mı kontrol et
            if (V[i].CompareDataOfBook(BookName, BookYear))
            {
                //* Kitap zaten varsa:
                V[i].increaseOFNumber(); //* Kitap sayısını 1 artır
                V[i].GetDataOfBook();    //* Güncel bilgileri göster
                exist = true;            //* Kitabın var olduğunu işaretle
                break;                   //* Döngüden çık
            }
        }

        //* Eğer kitap listede yoksa
        if (!exist)
        {
            Book Ob;                                //* Yeni kitap nesnesi oluştur
            Ob.CreatDataOfBook(BookName, BookYear); //* Kitap bilgilerini ata
            V.push_back(Ob);                        //* Kitabı vektöre ekle
            V[V.size() - 1].GetDataOfBook();        //* Yeni eklenen kitabın bilgilerini göster
        }
   }
   
    return 0;
}