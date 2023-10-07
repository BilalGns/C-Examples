#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, EBOB, EKOK, smallNumber;

    printf("Enter a two number : \n");
    scanf("%d%d", &x, &y);

    if (x > y)
        smallNumber = y;
    else
        smallNumber = x;

    for (int i = 2; i <= smallNumber; i++)
    {
        if ((x % i == 0) && (y % i == 0))
        {
            EBOB = i;
        }
    }

    if (EBOB != 0)
    {
        EKOK = (x / EBOB) * (y / EBOB) * EBOB;
        printf("EBOB (%d , %d) = %d\n", x, y, EBOB);
        printf("EKOK (%d , %d) = %d", x, y, EKOK);
    }

    else
    {
        EKOK = x * y;
        printf("Girilen sayilarin EBOB'u birdir.\n");
        printf("Girilen sayilarin EKOK'u = %d", EKOK);
    }

    return 0;
}