#include <stdio.h>
#include <stdlib.h>

float celsius(float f);
float fahrenheit(float c);

int main()
{
    float secim;
    char deger;

    printf("Celsius => Fahrenheit : c\n");
    printf("Fahrenheit => Celsius : f\n");
    printf("Bir secim girin : ");
    scanf(" %c", &deger);

    if (deger == 'c')
    {
        printf("Bir Celsius degeri girin : ");
        scanf("%f", &secim);
        printf("%.1f celsius => %.2f fahrenheit", secim, fahrenheit(secim));
    }
    else if (deger == 'f')
    {
        printf("Bir Fahrenheit degeri girin : ");
        scanf("%f", &secim);
        printf("%.1f fahrenheit => %.2f celsius\n", secim, celsius(secim));
    }
   else
    {
        printf("Gecersiz bir secim yaptiniz.\n");
    }

    return 0;
}

float celsius(float f)
{
    return (f - 32) * 5 / 9;
}

float fahrenheit(float c)
{
    return (c * 9 / 5) + 32;
} 
