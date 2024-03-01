#include <stdio.h>

int main(void)
{
    int first, second, third = 0;
    
    scanf("%d %d %d", &first, &second, &third);
    getchar();
    if (first == second)
    {
        if (first == third)
            printf("%d", 10000 + first * 1000);
        else
            printf("%d", 1000 + first * 100);
    }
    else if (second == third)
        printf("%d", 1000 + second * 100);
    else if (first == third)
        printf("%d", 1000 + first * 100);
    else
    {
        if (first > second && first > third)
            printf("%d", first * 100);
        else if (second > first && second > third)
            printf("%d", second * 100);
        else
            printf("%d", third * 100);
    }
    return (0);
}