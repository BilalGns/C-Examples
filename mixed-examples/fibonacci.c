#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, first, second, third, number;
    first = 1;
    second = 1;
    third = 1;

    printf("Dizinin kacinci elemanina kadar gormek istiyorsaniz girin : ");
    scanf("%d", &number);

    printf("- %d - %d -", first, second);

    for (i = 1; i <= number - 2; i++)
    {
        first = second;
        second = third;
        third = first + second;
        printf(" %d -", third);
    }

    return 0;
}