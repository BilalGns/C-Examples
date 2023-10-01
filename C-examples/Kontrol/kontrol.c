#include <stdio.h>
#include <stdlib.h>

//! Bu örnekte girilen karakterin büyük/küçük olduğunu buluyoruz. 

int main()
{
    char myCharacter;

    printf("Bir harf girin.\n");
    scanf("%c", &myCharacter);

    if ((myCharacter >= 'A') && (myCharacter <= 'Z'))
    {
        printf("Girilen harf buyuktur.");
    }

    else if ((myCharacter >= 'a') && (myCharacter <= 'z'))
    {
        printf("Girilen harf kucuktur.");
    }

    else
    {
        printf("Yanlis yada eksik tusladiniz.");
    }

    return 0;
}