#include <stdio.h>

int main(void)
{
    int angle1 = 0, angle2 = 0, angle3 = 0, sum = 0;
    scanf("%d %d %d", &angle1, &angle2, &angle3);
    getchar();
    sum = angle1 + angle2 + angle3;
    if (sum != 180)
        printf("Error");
    else
    {
        if (angle1 == angle2 && angle1 == angle3)
            printf("Equilateral");
        else if (angle1 == angle2 || angle1 == angle3 || angle2 == angle3)
            printf("Isosceles");
        else
            printf("Scalene");
    }
    return 0;
}