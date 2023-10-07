#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int bosluk = 0;
    char character;

    printf("Bir harf girin : ");
    scanf("%c", &character);

    printf("Bir tek sayi girin : ");
    scanf("%d", &number);

    for (int i = 0; i < number; i++)
    {
        if (i <= number / 2)
            bosluk++;
        else
            bosluk--;

        for (int j = 1; j < bosluk; j++)
        {
            printf("   ");
        }

        printf("%c\n", character);
    }

    return 0;
}