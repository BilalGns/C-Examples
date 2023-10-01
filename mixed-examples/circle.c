#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r, alan, cevre;

    const float PI = 3.1415;
    printf("Dairenin yaricapini girin : ");
    scanf("%f", &r);

    cevre = (2 * PI * r);
    alan = (PI * r * r);
    printf("Dairenin Alani : %f\n", alan);
    printf("Dairenin Cevresi : %f", cevre);
    return 0;
}
