#include <stdio.h>
#include <stdlib.h>

int exponentation();

int main()
{
    int base, exponent;
    float result = 6;

    printf("Enter base and exponent values : \n");
    scanf("%d%d", &base, &exponent);

    result = exponentation(base, exponent);

    if (exponent < 0)
    {
        printf("%f", 1 / result);
    }
    else
    {
        printf("%f", result);
    }

    return 0;
}

int exponentation(int x, int y)
{
    float result2 = 1;

    if (y < 0)
    {
        // Negatif üssü pozitife çeviriyoruz
        y = -y;
    }

    for (int i = 1; i <= y; i++)
    {
        result2 *= x;
    }

    return result2;
}