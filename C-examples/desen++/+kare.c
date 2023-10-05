#include <stdio.h>
#include <stdlib.h>

int main()
{
    //? Burada içi boş kare yapıyoruz.

    int number;

    printf("Enter a number : ");
    scanf("%d", &number);
    printf("\n");
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= number; j++)
        {
            if (i == 1 || i == number || j == 1 || j == number)
            {
                printf("# ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}