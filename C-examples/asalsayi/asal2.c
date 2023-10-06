#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num, i;
    bool isPrime = true; // is prime = asaldır

    printf("Bir sayi girin: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        isPrime = false; // 1 ve daha küçük sayılar asal değil
    }
    else
    {
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                isPrime = false; // num, i ile tam bölünebiliyorsa asal değil
                break;
            }
        }
    }

    if (isPrime)
    {
        printf("%d bir asal sayidir.\n", num);
    }
    else
    {
        printf("%d bir asal sayi degildir.\n", num);
    }

    return 0;
}
