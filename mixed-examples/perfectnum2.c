#include <stdio.h>
#include <stdlib.h>

int main()
{
    //? örnek mükemmel sayilar : 6 , 28 , 496 , 8128 , 33550336.

    int number, toplam;
    

    printf("Enter a number : ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        toplam = 0;
        for (int j = 1; j <= i / 2; j++)
        {

            if (i % j == 0)
            {
                toplam += j;
            }
        }
        if (toplam == i)
        {
            printf("%d sayisi bir mukemmel sayidir.\n", i);
        }
    }

    return 0;
}