#include <stdio.h>
#include <string.h>

int main()
{
    char list[50];
    int sayi = 0;

    printf("Bir metin girin : ");
    gets(list); //? scanf ile tutsaydık boşluk ile karşılaşınca sonrasını almazdı.

    for (int i = 0; i < strlen(list); i++) //! strlen(list) listenin genişliği anlamına gelmektedir.
    {
        if (list[i] == 'a' || list[i] == 'A') //* Buraya istenildiği kadar harf veya sayı eklenebilir.
        {
            sayi++;
        }
    }

    printf("%d adet A harfi bulunmaktadir", sayi);

    return 0;
}