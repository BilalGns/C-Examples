#include <stdio.h>
#include <stdlib.h>

// Bu örnekte girilen sayı değerlerinden en büyük olan ve en küçük olan bulunmaktadır.


int main()
{
    int number1, number2, number3, max, min;

    printf("3 tane sayi degeri girin :");
    scanf("%d%d%d", &number1, &number2, &number3);

    if ((number1 > number2) && (number1 > number3))
    {
        max = number1;
    }

    else if ((number2 > number1) && (number2 > number3))
    {
        max = number2;
    }

    else
    {
        max = number3;
    }

    if ((number1 < number2) && (number1 < number3))
    {
        min = number1;
    }

    else if ((number2 < number1) && (number2 < number3))
    {
        min = number2;
    }

    else
    {
        min = number3;
    }

    printf("Max deger : %d\n", max);
    printf("Min deger : %d", min);
    return 0;
}