#include <stdio.h>
#include <stdlib.h>

int main()
{

    float toplam = 0;
    float not = 0;
    float ortalama = 0;
    int i = 1;

    do
    {
        printf("%d. notu girin : ", i);
        scanf("%f", &not );

        if (not == 0)
        {
            break;
        }

        else if (not < 0)
        {
            printf("Lutfen pozitif sayi girin.");
            continue;
        }

        else
        {
            toplam += not ;
        }

        i++;

    } while (not != 0);

    ortalama = toplam / (i - 1);

    printf("\n%d adet not girildi.\n", (i - 1));
    printf("not ortalamasi = %.2f ", ortalama);

    return 0;
}