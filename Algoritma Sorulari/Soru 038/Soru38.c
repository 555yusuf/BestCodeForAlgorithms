//oyun kagitlari dagitmak 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
typedef struct Card
{
    char CardName[10];
    char CardNumber[10];
} Card;
void CreatTheStack(Card Stack[52]);
void CreatOfTheRandomArrey(int arr[52]);
void DealTheCard(Card Stack[52], int arr[52]);
int main()
{
    int arr[52];
    Card Stack[52];
    CreatOfTheRandomArrey(arr);
    CreatTheStack(Stack);
    DealTheCard(Stack, arr);
}
void CreatTheStack(Card Stack[52])
{
    char *NameOfTheCard[4] = {"Sinek ", "Karo  ", "Kupa ", "Maca  "};
    char *NumberOfTheCard[13] = {"As   ", "Iki  ", "Uc   ", "Dort ", "Bes  ", "Alti ", "Yedi ", "Sekiz", "Dokuz", "On   ", "Genç ", "Kiz  ", "Kiral"};
    int i, j, k = 0;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 13; j++)
        {
            strcpy(Stack[k].CardName, NameOfTheCard[i]);
            strcpy(Stack[k].CardNumber, NumberOfTheCard[j]);
            k++;
        }
    }
}
void CreatOfTheRandomArrey(int arr[52])
{
    srand(time(NULL));
    int i = 0, temp, Control = 0, j;
    while (i < 52)
    {
        Control = 0;
        temp = rand() % 52;
        for (j = 0; j < i; j++)
        {
            if (arr[j] == temp)
            {
                Control = 1;
                break;
            }
        }
        if (!Control)
            arr[i++] = temp;
    }
}
void DealTheCard(Card Stack[52], int arr[52])
{
    FILE *fp = fopen("Bilgi2.txt", "w");
    int j;
    fprintf(fp, "1.oyuncu  \t\t2.oyunuc  \t\t3.oyuncu  \t\t4.oyuncu\n");
    for (int i = 0; i < 52;    )
    {
        j = arr[i++];
        fprintf(fp, "%s%s\t\t", Stack[j].CardName, Stack[j].CardNumber);
        j = arr[i++];
        fprintf(fp, "%s%s\t\t", Stack[j].CardName, Stack[j].CardNumber);
        j = arr[i++];
        fprintf(fp, "%s%s\t\t", Stack[j].CardName, Stack[j].CardNumber);
        j = arr[i++];
        fprintf(fp, "%s%s\n", Stack[j].CardName, Stack[j].CardNumber);
    }
    fclose(fp);
}