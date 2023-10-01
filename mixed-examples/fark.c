#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int mynumber;
    mynumber = 5;

    printf(" mynumber :%d\n" , mynumber);
    printf(" ++mynumber :%d\n" , ++mynumber); // TODO : Burada işlem sırasında bir arttırır.
    printf(" mynumber++ :%d\n" , mynumber++); //! Burada işlem bittikten sonra değeri bir arttırır bu yüzden bir sonraki number değerini 9 olarak yazdırır.
    printf(" mynumber :%d\n" , mynumber);

    return 0;
}