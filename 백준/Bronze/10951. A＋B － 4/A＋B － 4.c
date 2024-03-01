#include <stdio.h>

int main(void)
{
    int a, b = -1;
    while (scanf("%d %d", &a, &b) != EOF)
    {
        getchar();
        printf("%d\n", a+b);
    }
    return (0);
}