#include <stdio.h>
#include <stdlib.h>

int factorial();

int main()
{
    int number ;

    printf("Enter the number whose factorial you want to get : "); //! Faktöriyelini almak istediğiniz sayısı girin.
    scanf("%d" , &number);

    printf("%d! = %d" , number , factorial(number));
    return 0;
}

int factorial(int x)
{
    if (x == 0)
    {
        return 1;
    }
    
    else
    {
        return x* factorial(x-1);
    }
}