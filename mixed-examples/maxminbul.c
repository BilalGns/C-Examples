#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, number, maxNumber, minNumber;
    maxNumber = -9999999, minNumber = 9999999, i = 1;
    //? Burada uçuk değerler verdik çünkü burada amacımız max ve min değerlere bu değerlerin otomatik tanımlanmaması.

    do
    {
        printf("%d. sayiyi girin : ", i);
        scanf("%d", &number);
        i++;

        if (number == 0)
            break;

        if (number < minNumber)
            minNumber = number;

        if (number > maxNumber)
            maxNumber = number;

    } while (number != 0);

    printf("\nEn buyuk sayi = %d\n", maxNumber);
    printf("En kucuk sayi = %d", minNumber);

    return 0;
}