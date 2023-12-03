#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, randomsayi, score = 100, guess;
    srand(time(NULL));
    randomsayi = rand() % 10 + 1;
    printf("%d\n", randomsayi);

    for (int i = 0; i < 10; i++)
    {
        printf("(1-10) arasinda bir sayi girin : ");
        scanf("%d", &number);

        if (number == randomsayi)
        {
            printf("Random sayiyi %d. denemede dogru bildiniz.\n", i + 1);
            printf("Puaniniz = %d\n", score - i * 10);
            break;
        }   // Github : @BilalGns

        else if (i == 9)
        {
            printf("Tahmin hakkınız bitti.");
        }

        else
        {
            printf("Random sayiyi bilemediniz.\n");
        }
    }

    return 0;
}