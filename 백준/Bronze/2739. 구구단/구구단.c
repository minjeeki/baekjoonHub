#include <stdio.h>

int main(void)
{
    int N = 0;
    scanf("%d", &N);
    getchar();
    for (int i=1; i <= 9; i++)
        printf("%d * %d = %d\n", N, i, N * i);
    return (0);
}