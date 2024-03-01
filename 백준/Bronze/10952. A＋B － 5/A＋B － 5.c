#include <stdio.h>

int main(void)
{
    int a, b = -1;
    while (a != 0 && b != 0)
    {
        scanf("%d %d", &a, &b);
        getchar();
        if (a == 0 && b == 0)
            break;
        printf("%d\n", a+b);
    }
    return (0);
}