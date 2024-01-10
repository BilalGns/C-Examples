#include <stdio.h>

void toplam(int gelennumber);

int main()
{
    int number; 

    printf("Enter a number : ");
    scanf("%d" , &number);
    toplam(number);

}

void toplam(int gelennumber)
{
    int toplam = 0;

    while (gelennumber >= 1)
    {
        toplam += gelennumber % 10;
        gelennumber /= 10;
    }
    
    printf("Girdiginiz sayinin rakamlari toplami : %d" , toplam);
    
}