#include <stdio.h>
#include <stdlib.h>

//? Bu örnekte girilen sayının birler ve onlar basamağını buluyoruz.

int main()
{
    int first, second, sayi;

    printf("Bir sayi girin :");
    scanf("%d", &sayi);

    first = sayi % 10;

    second = (sayi % 100) / 10;

    printf("Girilen sayinin birler basamagi : %d\t", first);
    printf("Girilen sayinin olar basamagi : %d", second);
    return 0;
}