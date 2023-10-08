#include <stdio.h>
#include <stdlib.h>

int main()
{
    //? örnek mükemmel sayilar : 6 , 28 , 496 , 8128 , 33550336.
    
    int number, toplam;
    toplam = 1;

    printf("Enter a number : ");
    scanf("%d" , &number );   

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            toplam += i;
        }
        
    }
    
    if (toplam == number)
    {
        printf("%d sayisi bir mukemmel sayidir." , number);
    }
    
    else
    {
        printf("Girdiginiz sayi bir mukemmerl sayi degildir.");
    }


 
    return 0;
}