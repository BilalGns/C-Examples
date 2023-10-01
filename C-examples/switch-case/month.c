#include <stdio.h>
#include <stdlib.h>

int main()
{
    int monthNumber;

    printf("Enter a month number : \n");
    scanf("%d", &monthNumber);

    switch (monthNumber)
    {

    case 4:
    case 6:
    case 9:
    case 11:
        printf("%d.ay 30 gun surmektedir.", monthNumber);
        break;

    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
        printf("%d.ay 31 gun surmektedir.", monthNumber);
        break;

    case 2:
        printf("2.ay 28 veya 29 gun surmektedir.");
        break;

    default:
        printf("Yanlis yada hatali girdiniz.");
        break;
    }

    return 0;
}