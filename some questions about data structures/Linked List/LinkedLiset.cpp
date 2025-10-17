#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }

    void insert(int value)
    {
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void deleteValue(int value)
    {
        if (head == NULL)
        {
            cout << "Liste bos, silinecek eleman yok." << endl;
            return;
        }

        // aranan değer ilk eleman  ise
        if (head->data == value)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            cout << "Bas eleman silindi." << endl;
            return;
        }

        // Listede degeri bulana kadar dolas
        Node *temp = head;
        while (temp->next != NULL && temp->next->data != value)
        {
            temp = temp->next;
        }

        // Deger bulunursa, sil
        if (temp->next != NULL)
        {
            Node *deleteNode = temp->next;
            temp->next = temp->next->next;
            delete deleteNode;
            cout << "Deger " << value << " silindi." << endl;
        }
        else
        {
            cout << "Deger bulunamadi!" << endl;
        }
    }

    // Listeyi ekrana yazdır
    void printList()
    {
        if (head == NULL)
        {
            cout << "Liste bos." << endl;
            return;
        }

        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Liste kontrolü (bos mu, değil mi)
    bool isEmpty()
    {
        return head == NULL;
    }
};

int main()
{
    LinkedList list;

    // Listeye eleman ekleme
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);

    cout << "Liste elemanlari: ";
    list.printList();

    // Eleman silelim
    list.deleteValue(20);
    cout << "Liste elemanlari (20 silindikten sonra): ";
    list.printList();

    // Baska bir eleman silme
    list.deleteValue(10);
    cout << "Liste elemanlari (10 silindikten sonra): ";
    list.printList();

    // Var olmayan bir deger silme
    list.deleteValue(100);

    // Listeyi kontrol etme
    if (list.isEmpty())
    {
        cout << "Liste bostur." << endl;
    }
    else
    {
        cout << "Liste bos degildir." << endl;
    }

    return 0;
}