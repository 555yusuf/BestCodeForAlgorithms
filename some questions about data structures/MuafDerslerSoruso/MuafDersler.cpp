/*
her öğrencinin muaf olduğu derslerin listesi 
1) bir öğrenci 1'den fazla dersten muaf ise sadece 
bir nesse oluşutrusuz ve oraya 
liste şeklinde eklememiz gerekiyor  
2) class ve vector kullanmak zorunlu 
*/
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
class Ogrenci
{
private:
    string Name;
    string Ders;
    vector<string> Dersler;
public:
    void Getdata(string name, string ders)
    {
        Name = name;
        Ders = ders;
        Dersler.push_back(ders);
    }
    bool CompareDataOfStudy(string name)
    {
        if (Name == name)
            return true;
        else
            return false;
    }
    void Ekle(string ders)
    {
        Dersler.push_back(ders);
    }
    void data()
    {
        cout << Name << " Ders Sayisi " << Dersler.size()<<endl;
        for (string i : Dersler)
        {
            cout << i << endl;
        }
        cout<<"=================\n";
    }
};
int main()
{
    int OgrenciSayisi = 0;
    bool exist = false;
    vector<Ogrenci> V;
    string name, ders;
    ifstream ReadFile("MuafDersler.txt");
    if (!ReadFile)
    {
        cout << "Dosya Okunmadi " << endl;
        return 1;
    }
    while (ReadFile >> name >> ders)
    {
        bool exist = false;
        for (int i = 0; i < V.size(); i++)
        {
            if (V[i].CompareDataOfStudy(name))
            {
                V[i].Ekle(ders);
                exist = true;
                break;
            }
        }
        if (!exist)
        {
            Ogrenci Ob;
            Ob.Getdata(name, ders);
            V.push_back(Ob);
            OgrenciSayisi++;
        }
    }
    cout << "Ogrenci sayisi : " << OgrenciSayisi << endl;
    for (Ogrenci i : V)
    {
        i.data();
    }

    return 0;
}
