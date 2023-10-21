#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

    char isim[20];

    printf("Lutfen bir isim veya cumle girin: "); //? kullanıcının girdisini fgets fonksiyonu ile alırız.
    fgets(isim, sizeof(isim), stdin);             //! fgets, kullanıcının girdisinin satır sonuna kadar alınmasını sağlar.
                                                  //* stdin ise standart giriş akışını (klavyeden okuma) temsil eder.
    for (int i = 0; i < strlen(isim); i++)
    {

        printf("%c", toupper(isim[i]));
    }

    return 0;
}
