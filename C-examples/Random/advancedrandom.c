#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, randomsayi, guess;
    int score = 100;

    srand(time(NULL));
    randomsayi = rand() % 100 + 1;
    // Github : @BilalGns 
    printf("Random sayiyi olusturdum bence bulamazsin :)\n");

    for (int i = 0; i < 10; i++)
    {
        printf("(1-100) arasinda bir sayi girin : ");
        scanf("%d", &number);

        if (number < 1 || number > 100)
        {
            printf("(1-100) araliginda sayi girmelisin :)\n");
        }

        else if (number == randomsayi)
        {

            printf("Random sayiyi %d. denemede dogru bildiniz.\n", i + 1);

            if (i == 0)
            {
                printf("Galiba hayattaki tum sansini burada kullandin ;)\n");
            }

            printf("Puaniniz = %d\n", score - i * 10);
            break;
        }   // Github : @BilalGns

        else if (randomsayi > number)
        {
            printf("Daha buyuk bir sayi girin.\n");
        }

        else if (randomsayi < number)
        {
            printf("Daha kucuk bir sayi girin.\n");
        }

        if (i == 9)
        {
            printf("Tahmin hakkiniz bitti.");
            printf("Random sayiyi bilemediniz.\n");
        }
    }

    return 0;
}