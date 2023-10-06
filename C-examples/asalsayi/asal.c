#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 0;           
    int i = 2;
    

    printf("Pozitif bir sayi girin\n");
    scanf("%d", &number);

    if (number <= 1)
    {
        printf("Negatif sayilar , 0 ve 1 asal degildir.");
        return 0;
    }

    else    
    {

        while (i < number / 2)
        {
            if (number % i == 0)
            {
                printf("%d sayisi asal degildir.", number);
                return 0;
            }
            i++;
        }
    }

    printf("%d sayisi asal sayidir.", number);
    return 0;
}