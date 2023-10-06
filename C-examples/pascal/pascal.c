#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int cikti = 1;

    printf("Enter a number : ");
    scanf("%d", &number);

    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < number - i; j++)
        {
            printf("  ");
        }

        for (int a = 0; a <= i; a++)
        {

            if (a == 0)
            {
                cikti = 1;
            }

            else
            {
                cikti = cikti * (i - a + 1) / a;
            }

            printf("%4d", cikti);
        }
        printf("\n");
    }

    return 0;
}