#include <stdio.h>

int main()
{
    int toplam = 0;

    int array2D[4][4] = {

        {3, 4, 7, 2},
        {4, 6, 2, 1},
        {7, 5, 9, 1},
        {23, 16, 9, 8},

    };
        // github : @BilalGns

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%4d", array2D[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 4; i++)
    {

        for (int j = 0; j < 4; j++)
        {
            toplam += array2D [i] [j];
        }
        
        printf("%d. satir elemanlari toplami : %d" , i+1 , toplam);
        toplam = 0;
        printf("\n");
    }               

    toplam = 0; printf("\n");

    for (int i = 0; i < 4; i++)
    {

        for (int j = 0; j < 4; j++)
        {
            toplam += array2D [j] [i];
        }
        printf("%d. sutun elemanlari toplami : %d" , i+1 , toplam);
        toplam = 0;
        printf("\n");
    }

    return 0;
}