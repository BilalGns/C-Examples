#include <stdio.h>
#include <stdlib.h>

int main()
{

 // todo : Burada girdiğimiz açıların hangi üçgen türüne ait olduğunu bulduk.

    int angle1, angle2, angle3;

    printf("Enter tree angles :\n");
    scanf("%d%d%d", &angle1, &angle2, &angle3);

    if (angle1 + angle2 + angle3 == 180)
    {
        if (angle1 == angle2 && angle1 == angle3 && angle2 == angle3)
        {
            printf("This is an equilateral triangle.");
        }

        else if (angle1 == angle2 || angle1 == angle3 || angle2 == angle3)
        {
            printf("This is an isosceles triangle.");
        }

        else
        {
            printf("This is an scalene triangle.");
        }
    }

    else
    {
        printf("These angles do not form triangles.");
    }

    return 0;
}