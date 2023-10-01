#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cikis;
    do
    {
        int number, bolum, kalan, toplam;
        toplam = 0;

        printf("Dort basamakli bir sayi girin :");
        scanf("%d", &number);
        printf("Entered number: %d \n", number);

        if (number != 0)
        {

            if (number >= 1000 && number <= 9999)
            {
                //! Binler basamağını buluyoruz.
                bolum = number / 1000;
                toplam += bolum;
                kalan = number % 1000;

                //? Yüzler basamağını buluyoruz.

                bolum = kalan / 100;
                toplam += bolum;
                kalan = kalan % 100;

                // todo : Onlar basamağını buluyoruz.

                bolum = kalan / 10;
                toplam += bolum;
                kalan = kalan % 10;

                //? Birler basamağını  buluyoruz.
                bolum = kalan / 1;
                toplam += bolum;

                printf("Girdiginiz sayinin rakamlari toplami : %d\n", toplam);

                printf("Tekrar denemek ister misiniz ? (e/h)\n");

                scanf(" %c", &cikis);
            }

            else
            {
                printf("Hatali bir sayi girdiniz.\n");
            }
        }

        }

    while (cikis != 'h');
    printf("Cikis Yapildi...");

    return 0;
}
