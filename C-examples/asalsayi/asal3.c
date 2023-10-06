#include <stdio.h>
#include <stdbool.h>

int main()
{
    int number, j;
    bool control;
    int i;

    printf("Pozitif Bir Sayi Girin : ");
    scanf("%d", &number);

    if (number < 1)
    {
        printf("Yanlis yada eksik tusladiniz.");
        return 0;
    }

    else
    {

        for (i = 2; i <= number; i++)
        {
            control = true;

            for (j = 2; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    control = false;
                    break;
                }
            }

            if (control != false)
            {

                printf("%d  ", i);
            }
        }
    }

    return 0;
}