#include <stdio.h>
#include <stdlib.h>


int main()
{
    int day, sales, totalsales;
    char *dayname;
    day = 0;
    sales = 0;
    totalsales = 0;
    

    printf("Gunun numarasini girin (1-7):\n");
    scanf("%d", &day);

    if (day>7 || day<1)
    {
        printf("Yanlis yada eksik tusladiniz.");
        
        return 0 ;
    }
    

    switch (day)
    {
    case 7:
        if (day == 7)
        {
            dayname = "Pazar";
        }
        totalsales += 9, sales = 9;

    case 6:
        if (day == 6)
        {
            dayname = "Cumartesi";
        }
        totalsales += 12, sales = 12;

    case 5:
        if (day == 5)
        {
            dayname = "Cuma";
        }
        totalsales += 6, sales = 6;

    case 4:
        if (day == 4)
        {
            dayname = "Persembe";
        }
        totalsales += 3, sales = 3;

    case 3:
        if (day == 3)
        {
            dayname = "Carsamba";
        }
        totalsales += 17, sales = 17;

    case 2:
        if (day == 2)
        {
            dayname = "Sali";
        }
        totalsales += 7, sales = 7;

    case 1:
        if (day == 1)
        {
            dayname = "Pazartesi";
        }
        totalsales += 5;
        sales = 5;
    }

    printf("%s gunune kadar yapilan toplam satis : %d\n", dayname, totalsales);
    printf("%s gunu yapilan toplam satis : %d", dayname, sales);

    return 0;
}