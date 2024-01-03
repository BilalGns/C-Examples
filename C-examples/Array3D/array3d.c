#include <stdio.h>

void readSales();
void writeSales();

int matrix[3][2][2];

int main()
{
    readSales();
    writeSales();   

    return 0;
}

void readSales()
{
    for (int i = 0; i < 3; i++)
    {
        printf("%d. satis temsilcisi : \n", i + 1);

        for (int j = 0; j < 2; j++)
        {
            if (j == 0)
                printf("\tmatematik kitabi : \n");
            else
                printf("\tyazilim kitabi : \n");
            for (int k = 0; k < 2; k++)
            {
                if (k == 0)
                    printf("\t\tOkula satilan adet : ");
                else
                    printf("\t\tKirtasiyeye satilan adet : ");
                
                scanf("%d", &matrix[i][j][k]);
            }
            printf("\n");
        }
    }
}

void writeSales()
{

    int toplamokul = 0, toplamkirtasiye = 0, toplammatematik = 0, toplamyazilim = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            toplammatematik += matrix[i][0][j];
            toplamyazilim += matrix[i][1][j];
        }
    }

    for (int a = 0; a < 3; a++)
    {
        for (int b = 0; b < 2; b++)
        {
            toplamokul += matrix[a][b][0];
            toplamkirtasiye += matrix[a][b][1];
        }
    }

    printf("Okula toplam %d adet kitap satildi .\n", toplamokul);
    printf("Kirtasiyeye toplam %d adet kitap satildi .\n", toplamkirtasiye);
    printf("Toplam %d adet matematik kitabi satildi .\n", toplammatematik);
    printf("Toplam %d adet yazilim kitabi satildi . ", toplamyazilim);
}