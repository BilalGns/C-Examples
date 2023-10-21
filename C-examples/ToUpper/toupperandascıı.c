#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char isim[20];

    printf("Lutfen isminizi girin : ");
    fgets(isim, sizeof(isim), stdin);

    for (int i = 0; i < strlen(isim); i++)
    {
        printf("%c", toupper(isim[i]));
    }

    printf("\n");

    for (int j = 0; j < strlen(isim); j++)
    {
        if (isim[j] == 32)
        {
            printf("  ");
            continue;
        }

        if (isim[j] == 10)
        {
            //? 10 degerinin ASCII karşılığı LF(Line feed)'dir. Anlamı ise satır sonu demektir.
            continue;
        }

        printf("%d ", isim[j]);
    }

    return 0;
}