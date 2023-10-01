#include <stdio.h>
#include <stdlib.h>

//? Burada kenar uzunlukları verilen üçgenin açı çeşitlerini buluyoruz.

int main()
{
    char hipotenus;
    int a, b, c;

    printf("Ucgenin kenar uzunluklarini girin :\n");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b && a > c)
    {
        hipotenus = a;
    }

    else if (b > a && b > c)
    {
        hipotenus = b;
    }

    else
    {
        hipotenus = c;
    }

    if (hipotenus == a)
    {
        if (a * a == b * b + c * c)
        {
            printf("Dik acili ucgen.");
        }

        else if (a * a > b * b + c * c)
        {
            printf("Genis acili ucgen.");
        }

        else
        {
            printf("Dar acili ucgen.");
        }
    }

    else if (hipotenus == b)
    {
        if (b * b == a * a + c * c)
        {
            printf("Dik acili ucgen.");
        }

        else if (b * b > a * a + c * c)
        {
            printf("Genis acili ucgen.");
        }

        else
        {
            printf("Dar acili ucgen.");
        }
    }

    else
    {
        if (c * c == b * b + a * a)
        {
            printf("Dik acili ucgen.");
        }

        else if (c * c > b * b + a * a)
        {
            printf("Genis acili ucgen.");
        }

        else
        {
            printf("Dar acili ucgen.");
        }
    }

    return 0;
}