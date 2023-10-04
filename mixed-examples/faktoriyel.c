#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int faktoriyel = 1;

    printf("Faktoriyelini hesaplamak istediginiz sayiyi girin : ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        faktoriyel *= i; //?  faktoriyel = faktoriyel * 2;
    }

    printf("%d! = %d", number, faktoriyel);

    return 0;
}