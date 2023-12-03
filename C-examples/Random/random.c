#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{   // Github : @BilalGns
    int number;
    srand(time(NULL));
    for (int i = 1; i <= 5; i++)
    {
        number = rand() % 10 + 1;
        printf("%d. random sayi : %d\n", i, number);
    }

    return 0;
}