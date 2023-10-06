#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    printf("Bir sayi girin : ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf(" \n");
    }

   // printf("----------------- \n");

    for (int b = number; b >= 1; b--)
    {

        for (int a = 1; a < b; a++)
        {
            printf("* ");
        }
        printf(" \n");
    }

    return 0;
}