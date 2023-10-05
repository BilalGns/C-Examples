#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    printf("Bir sayi girin : ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {

        for (int s = 1; s <= number - i; s++)
        {
            printf("  ");
        }

        for (int j = 1; j <= i * 2 - 1; j++)
        {

            printf("# ");
        }

        printf("\n");
    }

    return 0;
}