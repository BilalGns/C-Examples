#include <stdio.h>
#include <stdlib.h>

void birlik();
void onluk();

int main()
{
    int number = 0, a1, a2, a3, a4;

    while (number != -1)
    {
        printf("\nEnter a four digit number : ");
        scanf("%d", &number);
        a1 = number % 10;
        a2 = (number % 100) / 10;
        a3 = (number % 1000) / 100;
        a4 = number / 1000;
        if (a4 != 1)
        {
            birlik(a4);
            printf(" Bin ");
        }
        if (a3 != 0)
        {
            birlik(a3);
            printf(" Yuz ");
        }
        onluk(a2);
        printf(" ");
        birlik(a1);
    }

    return 0;
}

void birlik(int gelensayi)
{
    switch (gelensayi)
    {
    case 1:
        printf("Bir");
        break;
    case 2:
        printf("Iki");
        break;
    case 3:
        printf("Uc");
        break;
    case 4:
        printf("Dort");
        break;
    case 5:
        printf("Bes");
        break;
    case 6:
        printf("Alti");
        break;
    case 7:
        printf("Yedi");
        break;
    case 8:
        printf("Sekiz");
        break;
    case 9:
        printf("Dokuz");
        break;
    }
}

void onluk(int gelensayi)
{
    switch (gelensayi)
    {
    case 1:
        printf("On");
        break;
    case 2:
        printf("Yirmi");
        break;
    case 3:
        printf("Otuz");
        break;
    case 4:
        printf("Kirk");
        break;
    case 5:
        printf("Elli");
        break;
    case 6:
        printf("Altmis");
        break;
    case 7:
        printf("Yetmis");
        break;
    case 8:
        printf("Seksen");
        break;
    case 9:
        printf("Doksan");
        break;
    }
}