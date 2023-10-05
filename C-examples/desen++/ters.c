#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    printf("Bir sayi girin : ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {

        for (int j = 0; j <= number-i; j++)
        {

            printf("%d " , i);
        }

        printf("\n");
    }

    return 0;
}