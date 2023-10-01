#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operator;
    float number1, number2;

    printf("Operator girin (+ , - , * , /)\n");
    scanf("%c", &operator);
    printf("iki adet sayi girin :\n");
    scanf("%f%f", &number1, &number2);

    switch (operator)
    {
    case '+':
        printf("islem sonucu : (%.1f + %.1f) = %.1f", number1, number2, number1 + number2);
        break;

    case '-':
        printf("islem sonucu : (%.1f - %.1f) = %.1f", number1, number2, number1 - number2);
        break;

    case '*':
        printf("islem sonucu : (%.1f * %.1f) = %.1f", number1, number2, number1 * number2);
        break;

    case '/':
        printf("islem sonucu : (%.1f / %.1f) = %.1f", number1, number2, number1 / number2);
        break;

    default:
        printf("Yanlis yada hatali bir islem yaptiniz...");
        break;
    }
    return 0;
}