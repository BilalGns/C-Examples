#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int number;
    float squareRoot;

    printf("Pozitif bir sayi girin :");
    scanf("%d", &number);

    if (number < 0)  
    {
        printf("Hatali bir sayi girdiniz...");
    }

    else
    {
        squareRoot = sqrt(number);

        if (squareRoot * squareRoot == number)
        {
            printf("Girdiginiz sayinin karekoku : %.0f", squareRoot);
        }

        else
        {
            printf("Girdiginiz sayinin karekoku tam sayi degil...\n");
            printf("kok %f\n", squareRoot);
        }
    }

    return 0;
}